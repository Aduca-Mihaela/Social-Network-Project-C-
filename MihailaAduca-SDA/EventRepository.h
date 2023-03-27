//
// Created by tinuta.mihaila on 6/30/2022.
//

#ifndef MIHAILAADUCA_SDA_EVENTREPOSITORY_H
#define MIHAILAADUCA_SDA_EVENTREPOSITORY_H
#include "Event.h"
#include "ArrayList.h"

class EventRepository{
private:
    ArrayList<Event> elems;
    char* fname;
public:
    EventRepository();
    EventRepository(ArrayList<Event> listaEventuri);
    void addEvent(Event& e1);
    void deleteEvent(Event& e1);
    Event* getAll();
    int size();
    void updateEvent(Event& eV , Event &eN);
    bool existaEvent(Event &e);

    ~EventRepository();
};

#endif //MIHAILAADUCA_SDA_EVENTREPOSITORY_H
