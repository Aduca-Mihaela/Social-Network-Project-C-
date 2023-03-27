//
// Created by tinuta.mihaila on 6/30/2022.
//
#include <cstring>
#include "Friendship.h"
#include <iostream>
using namespace std;

Friendship::Friendship(){
    this->id1 = 0;
    this->id2 = 0;
}

Friendship::Friendship(int id1, int id2) {
    this->id1 = id1;

    this->id2 = id2;

}

Friendship::Friendship(Friendship & f) {
    this->id1 = f.id1;

    this->id2 = f.id2;


}

int Friendship::getId1() {
    return this->id1;
}

int Friendship::getId2() {
    return this->id2;
}



void Friendship::setId1(int id1) {
    this->id1=id1;
}

void Friendship::setId2(int id2) {
    this->id2 =id2;
}



Friendship &Friendship::operator=(const Friendship &u) {
    if (this != &u) {
        this->id1 = u.id1;
        this->id2 = u.id2;
    }

    return *this;
}

ostream &operator<<(ostream &os, Friendship &u) {
    cout <<endl<< "Id-ul primei persoane:" << u.id1<< endl << "Id-ul a doilea persoane: "<< u.id2 << endl;
    return os;
}

istream &operator>>(istream &is, Friendship &u) {
    cout << "Introduceti datele utilizatorlui:" << endl;
    cout << "Introdu Id-ul primei pers: ";
    int id1;
    cin >> id1;
    cout << endl << "Introdu id-ul a doilea persoane: ";
    int id2;
    cin >> id2;



    u.setId1(id1);
    u.setId2(id2);

    return is;
}

bool Friendship::operator==(const Friendship & u) {
    if(u.id1 == this->id1 and u.id2 == this->id2)
        return true;
    if(u.id1 == this->id2 and u.id2 == this->id1)
        return true;
    return false;
}
/*
bool Friendship::operator<(const Friendship& s)
{
    return (strcmp(id1, s.id1) < 0 and strcmp(id2, s.id2) < 0 );
}

bool Friendship::operator>(const Friendship& s)
{
    return (strcmp(id1, s.id1) > 0 and strcmp(id2, s.id2) > 0);
}
*/

Friendship::~Friendship()
{
    this->id1 =0;
    this->id2 =0;
}

