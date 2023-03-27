//
// Created by tinuta.mihaila on 6/27/2022.
//

#ifndef MIHAILAADUCA_SDA_MULTIMEORD_H
#define MIHAILAADUCA_SDA_MULTIMEORD_H
#include "Node.h"
#include "iostream"
using namespace std;

template<class T>
class MultimeOrdonata{
private:
    Node<T>* root;
    void add(Node<T>* ad, T elem){

        if(ad->info > elem){ // adaugam pe stanga
            if(ad->left != nullptr) {
                add(ad->left, elem);
            }else{
                ad->left = new Node<T>(elem, nullptr, nullptr);
            }
        }else{  //adaugam in dreapta
            if(ad->right != nullptr) {
                add(ad->right, elem);
            }else{
                ad->right = new Node<T>(elem, nullptr, nullptr);
            }
        }
    }

    void afisareIN(Node<T>* ad){
        if(ad != nullptr){
            afisareIN(ad->left);
            cout<<ad->info<<endl;
            afisareIN(ad->right);
        }
    }
    //STERGEREA(radacina del, si termenul de sters):
    //-presupune o rearanjare a nodurilor
    //
    //1.Nodul de sters nu exista
    //2.Nodul de sters nu are succesori, este o frunza
    //3.Nodul de sters are un singur succesor
    //4.Nodul de sters are 2 succesori

    Node<T>* stergere(Node<T>* del, T elem){
        if(del == nullptr){
            cout<<"Nu exista noduri;";
            return nullptr;
        }

        if(del->info > elem)
            del->left = stergere(del->left, elem);
        else if (del->info < elem)
            del->right = stergere(del->right, elem);
        else{
            if(del->left == nullptr){
                Node<T>* temp = del->right;
                delete [] del;
                return temp;
            }
            else if(del->right == nullptr){
                Node<T>* temp = del->left;
                delete[] del;
                return temp;
            }
            else{
                Node<T>* temp = del->right;
                while(temp->left !=nullptr)
                    temp = temp->left;
                del->info = temp->info;
                del->right = stergere(del->right, temp->info);
            }
        }
        return del;
    }

public:
    MultimeOrdonata(){this->root = nullptr;}

    void add(T elem){
        if(this->root == nullptr) this->root = new Node<T>(elem, nullptr, nullptr);
        else add(this->root, elem);
    }

    void stergere(T elem){
        stergere(this->root, elem);
    }

    void afisare(){
        afisareIN(this->root);
    }

    bool isEmpty(){
        return (this->root == nullptr);
    }

};

#endif //MIHAILAADUCA_SDA_MULTIMEORD_H
