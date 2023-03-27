//
// Created by tinuta.mihaila on 6/29/2022.
//

#ifndef MIHAILAADUCA_SDA_MESSAGESREPOSITORY_H
#define MIHAILAADUCA_SDA_MESSAGESREPOSITORY_H

#include "Messages.h"
#include "ArrayList.h"

class MessagesRepository{
private:
    ArrayList<Messages> elements;
    char* fname;
public:
    MessagesRepository();
    ~MessagesRepository();
    MessagesRepository(const char*);
    Messages* getAll();
    void addMessage(Messages&);
    void deleteMessage(Messages&);
    int size();

};


#endif //MIHAILAADUCA_SDA_MESSAGESREPOSITORY_H
