//
// Created by tinuta.mihaila on 6/27/2022.
//

#ifndef MIHAILAADUCA_SDA_NODE_H
#define MIHAILAADUCA_SDA_NODE_H
#include <iostream>
using namespace std;

template<typename T>
class MultimeOrdonata;

template<class T>
class Node{
private:
    T info;
    Node<T>* left;
    Node<T>* right;
public:
    Node(T info) : info(info) {this->left = nullptr, this->right = nullptr;}

    Node(T info, Node<T> *left, Node<T> *right) : info(info), left(left), right(right) {}

    friend class MultimeOrdonata<T>;
};

#endif //MIHAILAADUCA_SDA_NODE_H
