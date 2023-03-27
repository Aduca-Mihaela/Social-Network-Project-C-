//
// Created by tinuta.mihaila on 6/30/2022.
//
#include "FsService.h"

FsService::FsService() {}

FsService::~FsService() {}


//adauga o prietenie
void FsService::addFriendship(int id1, int id2) {
    Friendship f1(id1, id2);
    this->friendsRepo.addFriendship(f1);
}


//sterge o prietenie
void FsService::deleteFriendship(int id1, int id2) {
    Friendship f1(id1, id2);
    this->friendsRepo.deleteFriendship(f1);
}


//modifica o prietenie
//void FsService::updateFriendship(int id1Vechi, int id2Vechi, int id1Nou, int id2Nou) {
    //Friendship fV(id1Vechi, id2Vechi);
    //Friendship fN(id1Nou, id2Nou);
    //this->friendsRepo.updateFrienship(fV, fN);
//}


//returneaza toate prieteniile
Friendship* FsService::servGetAll() {
    return this->friendsRepo.getAll();
}

//returneaza dimensiunea
int FsService::getSize() {
    return this->friendsRepo.size();
}

FsService::FsService(FsRepository &fr) {
    this->friendsRepo = fr;
}
