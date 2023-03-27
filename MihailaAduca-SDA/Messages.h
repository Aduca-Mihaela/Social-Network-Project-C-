//
// Created by tinuta.mihaila on 6/29/2022.
//

#ifndef MIHAILAADUCA_SDA_MESSAGES_H
#define MIHAILAADUCA_SDA_MESSAGES_H
#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

class Messages{
private:
    int idT;
    int idR;
    string text;

public:
    Messages();
    Messages(int, int, string );
    Messages( const Messages&);
    int getIdT();
    int getIdR();
    string getText();

    void setIdT(int);
    void setIdR(int);
    void setText(string);
    Messages& operator = (const Messages&);
    bool operator == (const Messages&);

    friend ostream& operator <<(ostream& os, Messages&u);
    friend istream& operator >>(istream& is , Messages&u);


};

#endif //MIHAILAADUCA_SDA_MESSAGES_H
