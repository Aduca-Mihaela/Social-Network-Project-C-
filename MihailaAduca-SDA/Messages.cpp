//
// Created by tinuta.mihaila on 6/29/2022.
//
#include "Messages.h"

Messages::Messages() {
    this->idT = 0;
    this->idR = 0;
    this->text = " ";
}

Messages::Messages(const Messages &t) {
    this->idR = t.idR;
    this->idT = t.idT;
    this->text = t.text;
}

int Messages::getIdT() {
    return this->idT;
}

int Messages::getIdR() {
    return this->idR;
}

string Messages::getText() {
    return this->text;
}

void Messages::setIdR(int idR) {
    this->idR = idR;
}

void Messages::setIdT(int idT) {
    this->idT = idT;
}

void Messages::setText(string text) {
    this->text = text;
}


Messages &Messages::operator=(const Messages &t) {
    if (this != &t) {

        this->idT = t.idT;

        this->idR = t.idR;
        this->text = t.text;
    }
    return  *this;
}

bool Messages::operator==(const Messages &t) {
    return (this->idT == t.idT and this->idR == t.idR and this->text == t.text);
}

Messages::Messages(int a, int b, string c) {
    this->idT = a;
    this->idR = b;
    this->text = c;
}

ostream &operator<<(ostream &os, Messages &u)  {

    os << endl << "Emitatorul:" << u.idT<< endl << "Receptorul:" << u.idR << endl<< "Mesajul:"<< u.text<< endl;


    return os;

}

istream &operator>>(istream &is, Messages &u) {
    is >> u.idT >> u.idR >> u.text;
    return is;


}