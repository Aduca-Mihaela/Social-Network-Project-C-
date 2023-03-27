//
// Created by tinuta.mihaila on 6/28/2022.
//

#ifndef MIHAILAADUCA_SDA_UI_H
#define MIHAILAADUCA_SDA_UI_H
#include "UserService.h"
#include "MessagesService.h"
#include "FsService.h"
#include "EventService.h"
#include "ArrayList.h"

class UI{
private:
    UserService userService;
    FsService friendsService;
    MessagesService messagesService;
    EventService eventService;

public:
    void runCrudUsers();
    void uiAddUser();
    void uiDeleteUser();
    void uiUpdateUser();
    void uiShowAllUsers(User* lista);
    void showAllFriends(int id);

    void runCrudMessages();
    void uiAddMessage();
    void uiDeleteMessage();
    void uiShowAllMessages(Messages* lista);
    void uiDeleteAllMessagesById(int id);


    void runCrudFriendship();
    void uiAddFriendship();
    void uiDeleteFriendship();
    //void uiUpdateFriendship();
    void uiShowAllFriendships(Friendship* lista);
    //void uiNewFriendship(int id);

    void runCrudEvents();
    void uiAddEvent();
    void uiDeleteEvent();
    void uiUpdateEvent();
    void uiShowAllEvents(Event* lista);
    void uiAddParticipant();
    void uiDeleteParticipant();
    void uiListaPartEvent();

    void defaultUsers();

    UI();
    void showMenu();
    UI(UserService&, MessagesService&, FsService&, EventService&);
    ~UI();
};



#endif //MIHAILAADUCA_SDA_UI_H
