#include <iostream>
#include "event.h"
#include <cstdlib>

using namespace std;

 void Event::load(){
     cout <<"Nazwa wydarzenia: "<<endl;
     cin >>nazwa;
     cout <<"Dzien: "<<endl;
     cin >>dzien;
     cout << "Miesiac: "<<endl;
     cin>>miesiac;
     cout <<"Rok: "<<endl;
     cin >>rok;
     cout<< "O ktorej godzinie: "<<endl;
     cin>>godzina;
     cout <<"Ile minut: "<<endl;
     cin>>minuta;
 }
     void Event::show(){
     cout <<nazwa<<" "<<dzien<<" "<<miesiac<<" "<<rok<<" "<<godzina<<" "<<minuta<<endl;
     }

 Event::Event(string n,int d,int m, int r,int g, int minut){
 nazwa =n;
 dzien=d;
 miesiac=m;
 rok=r;
 godzina=g;
 minuta=minut;

 }

 Event::~Event(){
 cout<<"Czyszcznie!"<<endl;
 exit(0);
 }


