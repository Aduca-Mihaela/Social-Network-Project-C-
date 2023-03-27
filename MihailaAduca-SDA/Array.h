//
// Created by tinuta.mihaila on 6/28/2022.
//

#ifndef MIHAILAADUCA_SDA_ARRAY_H
#define MIHAILAADUCA_SDA_ARRAY_H
#include <iostream>
using namespace std;
template <typename T>

class Array {
private:
    int dimMax;
    int dimCurenta;
    T* elemente;
public:
    Array(){};
    Array(int dimCurenta, int dimMax, T*)
    {   this->dimCurenta=0;
        this->dimMax=100;
        this->elemente= new T[this->dimMax];
    }
    ~Array(){};
    int size()
    {return this->dimCurenta;
    }
    void add(const T& element)
    {elemente[this->dimCurenta++]=element;
    }
    void remove(int pozitie)
    {for (int i = pozitie; i<this->dimCurenta-1;i++)
            this->elemente[i]=this->elemente[i+1];
        this->dimCurenta--;

    }
    void set(int pozitie, const T& element)
    {this->elemente[pozitie] = element;
    }
    T& getItem(int pozitie)
    {return this->elemente[pozitie];

    }

    T* getAllArray() {
        return elemente;
    }

    int indexOf(T &d) {
        for (int i = 0; i < dimCurenta; i++) {
            if (elemente[i] == d) return i;
        }
        return -1;
    }

    void display(){
        if(size() == 0)
            cout<< "Lista este goala"<< " ";
        else
            for(int i = 0; i <=size(); i++)
                cout<< elemente[i]<< " ";    };

};

#endif //MIHAILAADUCA_SDA_ARRAY_H
