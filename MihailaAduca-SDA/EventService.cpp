//
// Created by tinuta.mihaila on 6/30/2022.
//
#include "EventService.h"

EventService::EventService() {

}

EventService::~EventService(){
}

//adauga un eveniment
void EventService::addEvent(string nume, string locatie, string data) {
    Event e1(nume, locatie, data);
    this->eventRepo.addEvent(e1);
}

//sterge un eveniment
void EventService::deleteEvent(string nume, string locatie, string data) {
    Event e1(nume, locatie, data);
    this->eventRepo.deleteEvent(e1);
}

//modifica un eveniment
void EventService::updateEvent(string numeVechi, string locatieVeche, string dataVeche,
                               string numeNou, string locatieNoua, string dataNoua) {
    Event eV(numeVechi, locatieVeche, dataVeche);
    Event eN(numeNou, locatieNoua, dataNoua);
    this->eventRepo.updateEvent(eV, eN);
}

EventService::EventService(EventRepository &er) {
    this->eventRepo =er;
}

//returneaza toate evenimentele
Event* EventService::servGetAll() {
    return this->eventRepo.getAll();
}

int EventService::getSize() {
    return this->eventRepo.size();
}

bool EventService::existaEvent(string nume, string locatie, string data) {
    Event e1(nume, locatie, data);
    return this->eventRepo.existaEvent(e1);
}