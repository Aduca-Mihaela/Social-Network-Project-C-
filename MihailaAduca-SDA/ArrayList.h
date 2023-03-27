//
// Created by tinuta.mihaila on 6/27/2022.
//

#ifndef MIHAILAADUCA_SDA_ARRAYLIST_H
#define MIHAILAADUCA_SDA_ARRAYLIST_H
#include <iostream>
using namespace std;
template <class T>
class ArrayList {
private:
    T *data;
    int arraySize;
    int listSize;
public:
    //constructor
    ArrayList() {
        arraySize = 2;
        listSize = 0;
        data = new T[arraySize];
    }

//deconstructor
    ~ArrayList() {
        delete[]data;
    };

    T* getAllArray() {
        return data;
    }


//ia o pozitie si returneaza un element de pe acea pozitie
    T get(int index) {
        if (!isValidIndex(index)) return 0;
        return data[index];
    }

//returneaza pozitia unui anumit element, altfel -1
    int indexOf(T &d) {
        for (int i = 0; i < listSize; i++) {
            if (data[i] == d) return i;
        }
        return -1;
    }

//adauga o data la sfarsitul listei
    void add(const T d) {
        if (needsExpansion()) expandArray();
        data[listSize++] = d;
    }


//returneaza lungimea listei
    int size() {
        return listSize;
    }


    //sterge un element de pe o anumita pozitie
    bool remove(int index) {
        //if (!isValidIndex(index)) return false;
        for (int i = index + 1; i < size(); i++) {
            data[i - 1] = data[i];
        }
        listSize--;
        return true;
    }



    void clear() {
        listSize = 0;
        arraySize = 2;
        delete[]data;
        *data = new T[arraySize];
    }

//TRUE daca lista nu are niciun element/ este goala
    bool isEmpty() {
        return listSize == 0;
    }

//daca array-ul are nevoie de spatiu/ este plin
    bool needsExpansion() {
        return listSize >= arraySize;
    }

//alungim array-ul cu de doua ori lungimea initiala
     void expandArray() {
        arraySize *= 2;
        T *newData = new T[arraySize];
        for (int i = 0; i < listSize; i++) {
            newData[i] = data[i];
        }
        delete []data;
        data = newData;
    }


    bool isValidIndex(int index) {
        return index >= 0 && index < listSize;
    }
    /*
    void display(){
        if(isEmpty())
            cout<<"Lista este goala";
        else
            for(int i = 0; i <= size(); i++)
                cout << data[i] << endl;
    }*/

};




#endif //MIHAILAADUCA_SDA_ARRAYLIST_H
