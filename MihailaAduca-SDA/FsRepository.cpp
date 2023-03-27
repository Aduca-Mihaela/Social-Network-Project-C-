//
// Created by tinuta.mihaila on 6/30/2022.
//
#include "FsRepository.h"

FsRepository::FsRepository() {};

FsRepository::~FsRepository() {};

void FsRepository::addFriendship(Friendship& f) {
    this->elems.add(f);
}

void FsRepository::deleteFriendship(Friendship &f) {
    this->elems.remove(elems.indexOf(f));
}

int FsRepository::size() {
    return this->elems.size();
}

//void FsRepository::updateFrienship(Friendship &fV, Friendship &fN) {
  //  elems.update(fV, fN);
//}

Friendship* FsRepository::getAll() {
    return this->elems.getAllArray();
}
