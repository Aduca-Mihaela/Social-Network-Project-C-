//
// Created by tinuta.mihaila on 6/29/2022.
//

#ifndef MIHAILAADUCA_SDA_MESSAGESSERVICE_H
#define MIHAILAADUCA_SDA_MESSAGESSERVICE_H
#include "MessagesRepository.h"
#include "ArrayList.h"

class MessagesService{
private:
    MessagesRepository messagesRepo;
public:
    MessagesService();
    MessagesService(MessagesRepository& messagesRepo);
    void addMessage(int idT, int idR, string text);
    void deleteMessage(int idT, int idR, string text);

    int getSize();

    Messages* servGetAll();
    ~MessagesService();
};







#endif //MIHAILAADUCA_SDA_MESSAGESSERVICE_H
