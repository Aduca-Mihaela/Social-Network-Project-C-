//
// Created by tinuta.mihaila on 6/28/2022.
//
#include "UI.h"

UI::UI() {

}

UI::~UI() {

}

UI::UI(UserService &u, MessagesService &m, FsService &f, EventService &e) {
    this->userService = u;
    this->friendsService = f;
    this->messagesService = m;
    this->eventService = e;

}

void UI::showMenu() {
    while (true) {
        cout << "1. CRUD Users: " << endl;
        cout << "2. CRUD Messages: " << endl;
        cout << "3. CRUD Friendship: " << endl;
        cout << "4. CRUD Events " << endl;
        cout << "0. Iesire"<< endl << endl;
        cout << "Dati optiunea: ";
        string optiune;
        cin>> optiune;
        if( optiune == "1")
            runCrudUsers();
        else if(optiune == "2")
            runCrudMessages();
        else if(optiune == "3")
            runCrudFriendship();
        else if(optiune == "4")
            runCrudEvents();
        else if(optiune == "0")
            break;
        else
            cout << "Optiune gresita! Reincercati!" << endl;
    }
}

void UI::runCrudUsers() {
    while (true){
        cout << "1. Adauga User" << endl;
        cout << "2. Sterge User" << endl;
        cout << "3. Modifica User" << endl;
        cout << "4. Afiseaza toti prietenii unui user:" << endl;
        cout << "a. Afiseaza userii" << endl;
        cout << "0. Iesire" << endl;

        cout << "Dati optiunea: ";
        string optiune;

        cin>> optiune;
        if( optiune == "1")
            uiAddUser();
        else if(optiune == "2")
            uiDeleteUser();
        else if(optiune == "3")
            uiUpdateUser();
        else if(optiune == "4"){
            int id;
            cout<< "Dati id-ul:"<< endl;
            cin>>id;
            showAllFriends(id);}
        else if(optiune == "a")
           uiShowAllUsers(this->userService.servGetAll());
        else if(optiune == "0")
            break;
        else
            cout << "Optiune gresita! Reincercati!" << endl;
    }
}


void UI::runCrudMessages() {
    while (true){
        cout << "1. Adauga mesaj" << endl;
        cout << "2. Sterge mesaj" << endl;
        cout << "3. Sterge mesaj dupa id:" << endl;
        cout << "a. Afiseaza userii" << endl;
        cout << "0. Iesire" << endl;

        cout << "Dati optiunea: ";
        string optiune;

        cin>> optiune;
        if( optiune == "1")
            uiAddMessage();
        else if(optiune == "2")
            uiDeleteMessage();
        else if(optiune == "3"){
            int id;
            cout<< "Dati id-ul:"<< endl;
            cin>>id;
            uiDeleteAllMessagesById(id);}

        else if(optiune == "a")
            uiShowAllMessages(this->messagesService.servGetAll());
        else if(optiune == "0")
            break;
        else
            cout << "Optiune gresita! Reincercati!" << endl;
    }
}


void UI::runCrudFriendship() {
    while(true){
        cout << "1. Adauga Prietenie" << endl;
        cout << "2. Sterge prietenie" << endl;
        cout << "a. Afiseaza prieteniile" << endl;
        cout << "0. Iesire" << endl;
        cout << "Dati optiunea: " << endl;

        string optiune;
        cin>> optiune;
        if( optiune == "1")
            uiAddFriendship();
        else if(optiune == "2")
            uiDeleteFriendship();
        else if(optiune == "a")
            uiShowAllFriendships(this->friendsService.servGetAll());
        else if(optiune == "0")
            break;
        else
            cout << "Optiune gresita! Reincercati!" << endl;

    }
}


void UI::runCrudEvents() {
    while(true){
        cout << "1. Adauga eveniment" << endl;
        cout << "2. Sterge eveniment" << endl;
        cout << "3. Modifica eveniment" << endl;
        cout << "4. Adauga participant" << endl;
        cout << "5. Sterge participant" << endl;
        cout << "6. Lista cu participanti a evenimentului" << endl;
        cout << "a. Afiseaza evenimentele" << endl;
        cout << "0. Iesire" << endl;
        cout << "Dati optiunea: ";

        string optiune;
        cin>> optiune;
        if( optiune == "1")
            uiAddEvent();
        else if(optiune == "2")
            uiDeleteEvent();
        else if(optiune == "3")
            uiUpdateEvent();
        else if(optiune == "4")
            uiAddParticipant();
        else if(optiune == "5")
            uiDeleteParticipant();
        else if(optiune == "6")
            uiListaPartEvent();
        else if(optiune == "a")
            uiShowAllEvents(this->eventService.servGetAll());
        else if(optiune == "0")
            break;
        else
            cout << "Optiune gresita! Reincercati!" << endl;

    }
}


//adauga un user
void UI::uiAddUser() {
    cout << "Dati id-ul utilizatorului: " << endl;
    int id;
    cin >> id;

    cout << "Dati numele utilizatorului: " << endl;
    string nume;
    cin >> nume;

    cout << "Dati orasul utilizatorului: " << endl;
    string oras;
    cin >> oras;

    cout << "Dati varsta utilizatorului: " << endl;
    int varsta;
    cin >> varsta;

    userService.addUser(id, nume, oras, varsta);
    //this->runCrudUsers(this->userService.idByNume(nume));
}


//sterge un user
void UI::uiDeleteUser() {
    cout << "Dati id-ul utilizatorului: " << endl;
    int id;
    cin >> id;

    cout << "Dati numele utilizatorului: " << endl;
    char *nume = new char[10];
    cin >> nume;

    cout << "Dati orasul utilizatorului: " << endl;
    char *oras = new char[10];
    cin >> oras;

    cout << "Dati varsta utilizatorului: " << endl;
    int varsta;
    cin >> varsta;

    userService.deleteUser(id, nume, oras, varsta);
    delete[] nume;
    delete[] oras;
    //uiShowAllUsers(this->userService.servGetAll());
};

//modifica un user
void UI::uiUpdateUser() {
    cout << "Dati id-ul utilizatorului de modificat: " << endl;
    int idVechi;
    cin >> idVechi;

    cout << "Dati numele utiliziatorului de modificat: " << endl;
    string numeVechi;
    cin >> numeVechi;

    cout << "Dati orasul utiliziatorului de modificat: " << endl;
    string orasVechi;
    cin >> orasVechi;

    int varstaVeche;
    cout << "Dati varsta utiliziatorului de modificat: " << endl;
    cin >>  varstaVeche;

    cout << "Dati id-ul utilizatorului nou: " << endl;
    int idNou;
    cin >> idNou;

    cout << "Dati numele nou: " << endl;
    string numeNou;
    cin >> numeNou;

    cout << "Dati orasul nou: " << endl;
    string orasNou;
    cin >> orasNou;

    int varstaNoua;
    cout << "Dati varsta noua: " << endl;
    cin >> varstaNoua;

    userService.updateUser(idVechi, numeVechi, orasVechi, varstaVeche, idNou, numeNou, orasNou, varstaNoua);

}

//adauga un mesaj
void UI::uiAddMessage() {
    cout << "Dati id-ul emitatorului: " << endl;
    int idT;
    cin >> idT;

    cout << "Dati id-ul receptorului: " << endl;
    int idR;
    cin >> idR;

    cout << "Dati textul mesajului: " << endl;
    string text;
    cin >> text;


    messagesService.addMessage(idT, idR, text);
    //this->runCrudUsers(this->userService.idByNume(nume));
}

//sterge un mesaj
void UI::uiDeleteMessage() {
    cout << "Dati id-ul emitatorului: " << endl;
    int idTransmitter;
    cin >> idTransmitter;

    cout << "Dati id-ul receptorului: " << endl;
    int idReceiver;
    cin >> idReceiver;

    cout << "Dati continutul mesajului: " << endl;
    string text;
    cin >> text;

    messagesService.deleteMessage(idTransmitter, idReceiver, text);

    //uiShowAllMessages(this->messagesService.servGetAll());
};


//adauga o prietenie
void UI::uiAddFriendship(){
    cout << "Dati id-ul primului utilizator: " << endl;
    int id1;
    cin >> id1;

    cout << "Dati id-ul celui de al doilea utilizator: " << endl;
    int id2;
    cin >> id2;

    friendsService.addFriendship(id1, id2);
    //uiShowAllFriendships(this->friendsService.servGetAll());
}


//sterge o prietenie
void UI::uiDeleteFriendship() {
    cout << "Dati id-ul primului utilizator: " << endl;
    int id1;
    cin >> id1;

    cout << "Dati id-ul celui de al doilea utilizator: " << endl;
    int id2;
    cin >> id2;

    friendsService.deleteFriendship(id1, id2);
    //uiShowAllFriendships(this->friendService.servGetAll());
}


//adauga un eveniment
void UI::uiAddEvent() {
    cout << "Dati numele evenimentului: " << endl;
    string nume;
    cin >> nume;

    cout << "Dati locatia evenimentului: " << endl;
    string locatie;
    cin >> locatie;

    cout << "Dati data: " << endl;
    string data;
    cin >> data;

    eventService.addEvent(nume, locatie, data);

    uiShowAllEvents(this->eventService.servGetAll());
}


//sterge un eveniment
void UI::uiDeleteEvent() {
    cout << "Dati numele evenimentului: " << endl;
    string nume;
    cin >> nume;

    cout << "Dati locatia evenimentului: " << endl;
    string locatie;
    cin >> locatie;

    cout << "Dati data: " << endl;
    string data;
    cin >> data;

    eventService.deleteEvent(nume, locatie, data);
    //uiShowAllEvents(this->eventService.servGetAll());
}


//modifica un eveniment
void UI::uiUpdateEvent() {
    cout << "Dati numele evenimentului de modificat: " << endl;
    string numeVechi;
    cin >> numeVechi;

    cout << "Dati locatia evenimentului de modificat: " << endl;
    string locatieVeche;
    cin >> locatieVeche;

    cout << "Dati data evenimentului de modificat: " << endl;
    string dataVeche;
    cin >> dataVeche;

    cout << "Dati numele nou: " << endl;
    string numeNou;
    cin >> numeNou;

    cout << "Dati locatia noua: " << endl;
    string locatieNoua;
    cin >> locatieNoua;

    cout << "Dati data noua: " << endl;
    string dataNoua;
    cin >> dataNoua;

    eventService.updateEvent(numeVechi, locatieVeche, dataVeche,  numeNou, locatieNoua, dataNoua);

}

void UI::uiAddParticipant() {
    Event event;
    cin >> event;
    if(this->eventService.existaEvent(event.getNume(), event.getLocatie(), event.getData())){
        User user;
        cin >> user;
        if(this->userService.existaUser(user.getId(), user.getNume(), user.getOras(), user.getVarsta())){
            for(int i = 0; i < this->eventService.getSize(); i++)
                if(this->eventService.servGetAll()[i] == event){
                    this->eventService.servGetAll()[i].addPart(user);
                    i = 9999;
                }

        }
        else
            cout << "Nu exista user-ul dat!" << endl;
    }
    else
        cout << "Nu exista event-ul dat!" << endl;
    cout << endl;
}



void UI::uiDeleteParticipant() {
    Event event;
    cin >> event;
    if(this->eventService.existaEvent(event.getNume(), event.getLocatie(), event.getData())){
        User user;
        cin >> user;
        if(this->userService.existaUser(user.getId(), user.getNume(), user.getOras(), user.getVarsta())){
            for(int i = 0; i < this->eventService.getSize(); i++)
                if(this->eventService.servGetAll()[i] == event){
                    this->eventService.servGetAll()[i].deletePart(user);
                    i = 9999;
                }

        }
        else
            cout << "Nu exista user-ul dat!" << endl;
    }
    else
        cout << "Nu exista event-ul dat!" << endl;
    cout << endl;
}

void UI::uiListaPartEvent() {
    Event event;
    cin >> event;
    if(this->eventService.existaEvent(event.getNume(), event.getLocatie(), event.getData())){
        for(int i = 0; i < this->eventService.getSize(); i++)
            if(this->eventService.servGetAll()[i] == event)
                for(int j = 0; j < this->eventService.servGetAll()[i].getNrPart(); j++)
                    cout << this->eventService.servGetAll()[i].getListaParticipanti()[j].getNume() << endl;
    }
    else
        cout << "Event-ul dat nu exista!" << endl;
    cout << endl;
}


void UI::showAllFriends(int id) {
    Friendship* friendship = this->friendsService.servGetAll();
    for(int i = 0; i < this->userService.getSize(); i++)
        if(friendship[i].getId1() == id || friendship[i].getId2() == id)
            cout << friendship[i] << endl;}


void UI::uiDeleteAllMessagesById(int id) {
    Messages* mesaj = this->messagesService.servGetAll();
    for(int i = 0; i < this->messagesService.getSize(); i++)
    {   if(mesaj[i].getIdT() == id)
            this->messagesService.deleteMessage(mesaj[i].getIdT(),mesaj[i].getIdR(),mesaj[i].getText());}
}



void UI::uiShowAllUsers(User* lista) {
    for(int i = 0; i < this->userService.getSize(); i++)
    cout << lista[i] << endl;
}


void UI::uiShowAllMessages(Messages* lista) {
    for(int i = 0; i < this->messagesService.getSize(); i++)
        cout << lista[i] << endl;
}

void UI::uiShowAllFriendships(Friendship *lista) {
    for(int i = 0; i < this->friendsService.getSize(); i++)
        cout << lista[i] << endl;
}

void UI::uiShowAllEvents(Event *lista) {
    for (int i = 0; i < this->eventService.getSize(); i++)
        cout << lista[i] << endl;
}

/*
void UI::defaultUsers() {
    User u1(1,"ana","cluj",34);
    User u5(5,"ana","claj",14);
    User u2(2,"bna","cluj",34);
    User u3(3,"cna","clvj",324);
    User u4(4,"dna","cludj",314);

    userService.addUser(u1.getId(), u1.getNume(), u1.getOras(), u1.getVarsta());
    userService.addUser(u2.getId(), u2.getNume(), u2.getOras(), u2.getVarsta());
    userService.addUser(u3.getId(), u3.getNume(), u3.getOras(), u3.getVarsta());

}*/