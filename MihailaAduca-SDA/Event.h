//
// Created by tinuta.mihaila on 6/30/2022.
//

#ifndef MIHAILAADUCA_SDA_EVENT_H
#define MIHAILAADUCA_SDA_EVENT_H
#include <iostream>
#include "User.h"
#include "ArrayList.h"
using namespace std;

class Event{
private:
    string nume;
    string locatie;
    string data;
    ArrayList<User> listaParticipanti;
public:
    Event();
    ~Event();
    Event(string, string, string);
    Event(Event&);
    string getNume();
    string getLocatie();
    string getData();
    void setNume(string);
    void setLocatie(string);
    void setData(string );
    User* getListaParticipanti();
    int getNrPart();
    void setListaPart(ArrayList<User> listaParticipanti);
    void addPart(User &user);
    void deletePart(User &user);

    bool operator==(const Event& ev) const;
    bool operator!=(const Event& ev) const;

    Event& operator = (const Event& ev);

    friend ostream& operator<<(ostream& os, Event&u);
    friend istream& operator>>(istream& is, Event&u);
};

#endif //MIHAILAADUCA_SDA_EVENT_H
