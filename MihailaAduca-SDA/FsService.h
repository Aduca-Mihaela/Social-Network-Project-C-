//
// Created by tinuta.mihaila on 6/30/2022.
//

#ifndef MIHAILAADUCA_SDA_FSSERVICE_H
#define MIHAILAADUCA_SDA_FSSERVICE_H
#include "FsRepository.h"

class FsService{
private:
    FsRepository friendsRepo;
public:
    FsService();
    ~FsService();
    void addFriendship(int id1, int id2);
    void deleteFriendship(int id1, int id2);
    //void updateFriendship(int id1Vechi, int id2Vechi, int id1Nou, int id2Nou);
    FsService(FsRepository&);
    //void prieteniComuni(const char* id1, const char* id2);
    Friendship* servGetAll();
    int getSize();
    //vector<Friendship> filter(int id1, int id2);
};

#endif //MIHAILAADUCA_SDA_FSSERVICE_H
