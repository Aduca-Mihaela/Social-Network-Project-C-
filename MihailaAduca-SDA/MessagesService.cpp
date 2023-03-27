#include "MessagesService.h"

MessagesService::MessagesService() {

}

MessagesService::~MessagesService() {

}

MessagesService::MessagesService(MessagesRepository& messagesRepo) {
    this->messagesRepo = messagesRepo;
}

// adauga un mesaj
void MessagesService::addMessage(int idT, int idR, string text) {
    Messages u1(idT, idR, text);
    this->messagesRepo.addMessage(u1);
}


//sterge un mesaj
void MessagesService::deleteMessage(int idT, int idR, string text) {
    Messages u1(idT, idR, text);
    this->messagesRepo.deleteMessage(u1);
}



//afiseaza toate mesajele
Messages* MessagesService::servGetAll() {
    return this->messagesRepo.getAll();
}

//returneaza dimensiunea
int MessagesService::getSize() {
    return this->messagesRepo.size();
}