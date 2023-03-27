//
// Created by tinuta.mihaila on 6/28/2022.
//

#ifndef MIHAILAADUCA_SDA_USERSERVICE_H
#define MIHAILAADUCA_SDA_USERSERVICE_H
#include "UserRepository.h"

class UserService: public error_code{
private:
    UserRepository userRepo;
public:
    UserService();
    UserService(UserRepository& userRepo);
    void addUser(int id, string nume, string oras, int varsta);
    void deleteUser(int id, string nume, string oras, int varsta);
    void updateUser(int idVechi, string numeVechi, string orasVechi,int varstaVeche,
                    int idNou, string numeNou, string orasNou, int varstaNoua);
    int getSize();
    //int getIdByNume(string username);
    User* servGetAll();
    bool existaUser(int id, string nume, string oras, int varsta);
    ~UserService();
};

#endif //MIHAILAADUCA_SDA_USERSERVICE_H
