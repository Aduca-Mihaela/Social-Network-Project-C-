//
// Created by tinuta.mihaila on 6/30/2022.
//

#ifndef MIHAILAADUCA_SDA_EVENTSERVICE_H
#define MIHAILAADUCA_SDA_EVENTSERVICE_H
#include "EventRepository.h"

class EventService{
private:
    EventRepository eventRepo;
public:
    EventService();
    ~EventService();
    EventService(EventRepository &er);
    void addEvent( string nume, string locatie, string data);
    void deleteEvent(string nume, string locatie, string data);
    void updateEvent(string numeVechi, string locatieVeche, string dataVeche,
                     string numeNou, string locatieNoua, string dataNoua);
    Event* servGetAll();
    int getSize();
    bool existaEvent(string nume, string locatie, string data);

};


#endif //MIHAILAADUCA_SDA_EVENTSERVICE_H
