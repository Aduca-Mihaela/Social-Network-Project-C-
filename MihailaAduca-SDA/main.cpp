#include <iostream>
#include "ArrayList.h"
#include "User.h"
#include "Array.h"
#include "MultimeOrd.h"
#include "UserRepository.h"
#include "UserService.h"
#include "UI.h"

int main() {
    /*ArrayList<User> elem;
    User u1(1, "a", "b",2);
    User u2(2, "c", "b", 3);
    elem.add(u1);
    elem.add(u2);
    elem.remove(elem.indexOf(u1));
    //elem.display();
    cout << "Hey";*/

    UserRepository userRepository;
    UserService userService(userRepository);
    MessagesRepository messagesRepository;
    MessagesService messagesService(messagesRepository);
    FsRepository fsRepository;
    FsService fsService(fsRepository);
    EventRepository eventRepository;
    EventService eventService(eventRepository);

    UI ui(userService, messagesService, fsService, eventService );

    //User u1(1,"ana","cluj",34);
    //User u5(5,"ana","claj",14);
    //User u2(2,"bna","cluj",34);
    //User u3(3,"cna","clvj",324);
    //ser u4(4,"dna","cludj",314);
    // userService.addUser(u1.getId(), u1.getNume(), u1.getOras(), u1.getVarsta());
    //userService.addUser(u2.getId(), u2.getNume(), u2.getOras(), u2.getVarsta());
    //userService.addUser(u3.getId(), u3.getNume(), u3.getOras(), u3.getVarsta());
    //userRepo.addUser(u1);
    //userService.addUser(1,"ana","cluj",12);

    ui.showMenu();
    //ui.defaultUsers();



}
