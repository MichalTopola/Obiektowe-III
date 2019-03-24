#include <iostream>

using namespace std;

class Event {

int dzien,miesiac,rok;
int godzina,minuta;
string nazwa;

public:
    Event(string,int,int,int,int,int);
    ~Event();
void load();
void show();

};
