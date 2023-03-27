//
// Created by tinuta.mihaila on 6/27/2022.
//

#include <cstring>
#include "User.h"

User::User() {
    this->id = 0;
    this->nume = "";
    this->oras = "";
    this->varsta = 0;
}


User::User(const User &t) {
    this->id = t.id;
    this->nume = t.nume;
    this->oras = t.oras;
    this->varsta = t.varsta;

}

int User::getId() {
    return this->id;

}

string User::getNume() {
    return this->nume;
}

string User::getOras() {
    return this->oras;
}

int User::getVarsta() {
    return this->varsta;

}

void User::setId(int id) {

    this->id = id;
}


void User::setNume(string nume) {

    this->nume = nume;
}

void User::setOras(string oras) {
    this->oras = oras;
}


void User::setVarsta(int varsta) {
    this->varsta = varsta;
}


User &User::operator=(const User &t) {
    if (this != &t) {

        this->id = t.id;

        this->nume = t.nume;
        this->oras = t.oras;
        this->varsta = t.varsta;
    }
    return  *this;
}

bool User::operator==(const User &t) {
    return (this->id == t.id and this->nume == t.nume and this->oras == t.oras and this->varsta == t.varsta);
}

ostream &operator<<(ostream &os, User &u)  {

    os << endl<<"Id: " << u.id <<endl << "Nume: " << u.nume <<endl<<"Oras " << u.oras<<endl <<"Varsta: " << u.varsta<<endl;


    return os;

}

User::User(int a, string b, string c, int d) {
    this->id = a;
    this->nume = b;
    this->oras = c;
    this->varsta = d;


}



istream &operator>>(istream &is, User &user) {
    is >> user.id >> user.nume >> user.oras >> user.varsta;
    return is;


}
