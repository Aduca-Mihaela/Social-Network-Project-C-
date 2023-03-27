//
// Created by tinuta.mihaila on 6/30/2022.
//

#ifndef MIHAILAADUCA_SDA_FSREPOSITORY_H
#define MIHAILAADUCA_SDA_FSREPOSITORY_H
#include "Friendship.h"
#include "ArrayList.h"

class FsRepository{
private:
    ArrayList<Friendship> elems;
    char* fname;
public:
    FsRepository();
    ~FsRepository();
    void addFriendship(Friendship&);
    void deleteFriendship(Friendship&);
    void updateFrienship(Friendship&, Friendship&);
    void prieteniComuni(Friendship&);
    Friendship* getAll();
    int size();
};

#endif //MIHAILAADUCA_SDA_FSREPOSITORY_H
