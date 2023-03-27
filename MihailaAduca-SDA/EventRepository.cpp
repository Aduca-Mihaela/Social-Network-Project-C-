//
// Created by tinuta.mihaila on 6/30/2022.
//
#include "EventRepository.h"

EventRepository::EventRepository() {

}

void EventRepository::addEvent(Event& e1) {
    elems.add(e1);
}

void EventRepository::deleteEvent(Event& e1) {
    elems.remove(elems.indexOf(e1));
}

void EventRepository::updateEvent(Event& eV, Event &eN) {
    for(int i = 0; i < elems.size(); i++)
        if(elems.getAllArray()[i] == eV){
            this->elems.remove(elems.indexOf(eV));
            this->elems.add(eN);
        }
}

EventRepository::EventRepository(ArrayList<Event> listaEventuri) {

}

Event* EventRepository::getAll() {
    return this->elems.getAllArray();
}

int EventRepository::size() {
    return this->elems.size();
}

bool EventRepository::existaEvent(Event &e) {
    for(int i = 0; i < this->elems.size(); i++)
        if(this->elems.getAllArray()[i] == e)
            return true;
    return false;
}

EventRepository::~EventRepository() {

}

