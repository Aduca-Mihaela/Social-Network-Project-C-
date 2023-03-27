//
// Created by tinuta.mihaila on 6/27/2022.
//

#ifndef MIHAILAADUCA_SDA_USER_H
#define MIHAILAADUCA_SDA_USER_H

#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

class User{
private:
    int id;
    string nume;
    string oras;
    int varsta;

public:
    User();
    User(int,string,string, int);
    User( const User&);
    int getId();
    string getNume();
    string getOras();
    int getVarsta();
    void setId(int);
    void setNume(string);
    void setOras(string);
    void setVarsta(int);
    User& operator = (const User&);
    bool operator == (const User&);

    friend ostream& operator <<(ostream& os, User&u);
    friend istream& operator >>(istream& is , User&u);


};



#endif //MIHAILAADUCA_SDA_USER_H
