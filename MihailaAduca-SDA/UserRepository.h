//
// Created by tinuta.mihaila on 6/28/2022.
//

#ifndef MIHAILAADUCA_SDA_USERREPOSITORY_H
#define MIHAILAADUCA_SDA_USERREPOSITORY_H
#include "User.h"
#include "ArrayList.h"

class UserRepository{
private:
    ArrayList<User> elements;
    //char* fname;
public:
    UserRepository();
    ~UserRepository();
    UserRepository(const char*);
    User* getAll();
    void addUser(User&);
    void deleteUser(User&);
    bool existaUser(User &u);
    bool existaNume(string nume);
    bool existaId(int id);
    bool existaOras( string oras);
    bool existaVarsta( int varsta);
    int size();
    void updateUser(User&, User&);
    ArrayList<User> findAllUsers();
    void saveToFile();
};
#endif //MIHAILAADUCA_SDA_USERREPOSITORY_H
