//
// Created by tinuta.mihaila on 6/30/2022.
//

#ifndef MIHAILAADUCA_SDA_FRIENDSHIP_H
#define MIHAILAADUCA_SDA_FRIENDSHIP_H
using namespace std;
#include <fstream>
class Friendship{
private:
    int id1, id2;
public:
    Friendship();
    Friendship(int, int );
    Friendship(Friendship &);
    int getId1();
    int getId2();


    void setId1(int);
    void setId2(int);

    Friendship& operator = (const Friendship&);
    bool operator == (const Friendship&);


    friend ostream& operator<<(ostream& os, Friendship&u);
    friend istream& operator>>(istream& is, Friendship&u);
    ~Friendship();
};

#endif //MIHAILAADUCA_SDA_FRIENDSHIP_H
