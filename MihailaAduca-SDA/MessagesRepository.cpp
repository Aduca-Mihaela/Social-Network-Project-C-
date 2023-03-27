//
// Created by tinuta.mihaila on 6/29/2022.
//
#include "MessagesRepository.h"


void MessagesRepository::addMessage(Messages &u) {
    this->elements.add(u);
}

void MessagesRepository::deleteMessage(Messages &u) {
    this->elements.remove(elements.indexOf(u));
}



Messages* MessagesRepository::getAll() {
    return this->elements.getAllArray();
}

int MessagesRepository::size() {
    return this->elements.size();
}


MessagesRepository::MessagesRepository() {

}

MessagesRepository::~MessagesRepository() {

}


