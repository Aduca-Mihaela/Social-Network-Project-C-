//
// Created by tinuta.mihaila on 6/28/2022.
//
#include "UserService.h"
#include "UserRepository.h"

UserService::UserService() {

}

UserService::~UserService() {

}

UserService::UserService(UserRepository& userRepo) {
    this->userRepo = userRepo;
}

// adauga un user
void UserService::addUser(int id, string nume, string oras, int varsta) {
    User u1(id, nume, oras, varsta);
    this->userRepo.addUser(u1);
}

/*
void UserService::deleteUser(int id) {
    bool ok = true;
    int lungime = this->getSize();
    vector<User> users = this->userRepo.getAll();
    for (int i = 0; i < lungime and ok; i++) {
        if (users[i].getId() == id) {
            this->userRepo.deleteUser(users[i]);
        }
    }
}*/

//sterge un user
void UserService::deleteUser(int id, string nume, string oras, int varsta) {
    User u1(id, nume, oras, varsta);
    this->userRepo.deleteUser(u1);
}


//modifica un user
void UserService::updateUser(int idVechi, string numeVechi, string orasVechi, int varstaVeche,
                             int idNou, string numeNou, string orasNou, int varstaNoua) {
    User uV(idVechi, numeVechi, orasVechi, varstaVeche);
    User uN(idNou, numeNou, orasNou, varstaNoua);
    this->userRepo.updateUser(uV, uN);
}


//afiseaza toti userii
User* UserService::servGetAll() {
    return this->userRepo.getAll();
}

//returneaza dimensiunea
int UserService::getSize() {
    return this->userRepo.size();
}

bool UserService::existaUser(int id, string nume, string oras, int varsta) {
    User u1(id, nume, oras, varsta);
    return this->userRepo.existaUser(u1);
}


/*
int UserService::getIdByNume(string nume) {
    int lenght = this->getSize();
    vector<User> users = this->servGetAll();
    for (int i = 0; i < lenght; i++)
        if (users[i].getNume() == nume)
            return users[i].getId();
}
*/



/*
int UserService::getId(int id) {
    vector<User> users;
    for (int i = 0; i < this->servGetAll().size(); i++) {
        if (this->servGetAll()[i].getId() == id)
            return id;
    }

}*/