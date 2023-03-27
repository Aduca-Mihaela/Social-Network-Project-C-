//
// Created by tinuta.mihaila on 6/30/2022.
//
#include "Event.h"
#include <cstring>

Event::Event() {
    this->nume = " ";
    this->locatie = " ";
    this->data = " ";
}

Event::~Event() {

}

Event::Event(string  nume, string locatie, string data) {
    this->nume = nume;
    this->locatie = locatie;
    this->data = data;
}

Event::Event(Event &e) {
    this->nume = e.nume;
    this->locatie = e.locatie;
    this->data = e.data;

}

string Event::getNume() {
    return this->nume;
}

string Event::getLocatie() {
    return this->locatie;
}

string Event::getData() {
    return this->data;
}

void Event::setNume(string nume) {
    this->nume = nume;
}

void Event::setLocatie(string  locatie) {
    this->locatie = locatie;
}

void Event::setData(string data) {
    this->data = data;
}

User *Event::getListaParticipanti() {
    return this->listaParticipanti.getAllArray();
}


void Event::setListaPart(ArrayList<User> listaParticipanti) {
    for(int i = 0; i < listaParticipanti.size(); i++)
        this->listaParticipanti.add(listaParticipanti.getAllArray()[i]);
}

void Event::addPart(User &user) {
    this->listaParticipanti.add(user);
}

void Event::deletePart(User &user) {
    this->listaParticipanti.remove(listaParticipanti.indexOf(user));
}

int Event::getNrPart() {
    return this->listaParticipanti.size();
}


bool Event::operator!=(const Event &ev) const {
    return !(*this == ev);
}

bool Event::operator==(const Event &ev) const {
    return ( this->nume == ev.nume and this->locatie== ev.locatie and this->data == ev.data);
}

Event &Event::operator=(const Event &ev) {
    if (this != &ev) {
        this->nume = ev.nume;
        this->locatie = ev.locatie;
        this->data = ev.data;}

    return *this;
}

ostream &operator<<(ostream &os, Event &u) {
    cout <<endl<< "Numele evenimentului:" << u.nume<< endl << "Locatia:" << u.locatie<< endl << "data:" << u.data << endl;
    return os;
}

istream &operator>>(istream &is, Event &u) {
    cout << "Introduceti datele evenimentului:" << endl;
    cout << "Introdu Numele: ";
    string nume;
    cin >> nume;
    cout << endl << "Introdu locatia: ";
    string locatie;
    cin >> locatie;
    cout << endl << "Introdu data: ";
    string data;
    cin >> data;


    u.setNume(nume);
    u.setLocatie(locatie);
    u.setData(data);

    return is;
}
