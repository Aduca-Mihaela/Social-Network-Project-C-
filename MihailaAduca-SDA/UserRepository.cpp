//
// Created by tinuta.mihaila on 6/28/2022.
//
#include "UserRepository.h"


void UserRepository::addUser(User & u) {
    this->elements.add(u);
}

void UserRepository::deleteUser(User& u) {
    this->elements.remove(elements.indexOf(u));
}


void UserRepository::updateUser(User &uV, User& uN) {
    for(int i = 0; i < elements.size(); i++)
        if(elements.getAllArray()[i] == uV){
            elements.remove(elements.indexOf(uV));
            elements.add(uN);
        }
}


User* UserRepository::getAll() {
    return this->elements.getAllArray();
}

int UserRepository::size() {
    return this->elements.size();
}

bool UserRepository::existaUser(User &u){
    for(int i = 0; i < this->size(); i++)
        if(elements.getAllArray()[i] == u)
            return true;
    return false;
}

bool UserRepository::existaId(int id) {
    for(int i = 0; i < this->size(); i++)
        if(elements.getAllArray()[i].getId() == id)
            return true;
    return false;
}

bool UserRepository::existaNume(string nume) {
    for(int i = 0; i < this->size(); i++)
        if(elements.getAllArray()[i].getNume() == nume)
            return true;
    return false;
}

bool UserRepository::existaOras(string oras) {
    for(int i = 0; i < this->size(); i++)
        if(elements.getAllArray()[i].getOras() == oras)
            return true;
    return false;
}

bool UserRepository::existaVarsta(int varsta) {
    for(int i = 0; i < this->size(); i++)
        if(elements.getAllArray()[i].getVarsta() == varsta)
            return true;
    return false;
}

UserRepository::UserRepository() {

}

UserRepository::~UserRepository() {

}



