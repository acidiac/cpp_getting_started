/*
  @file: basic/prg10.cpp
  @subject: using enums
  @author: amit chanchal <amit.chanchal@hotmail.com>
  @date: April 2017
*/
#include <iostream>
#include <string>
using namespace std;

enum Position {fw, md, wn, df, gk};

struct Player{
  string name;
  int age;
  bool active;
  Position pos;
  string club;
};

void printPlayer(Player p){
  string active = (p.active) ? "yes" : "no";
  cout<<"PLAYER DETAILS ------------"<<endl;
  cout<<"Name: "<<p.name<<endl;
  cout<<"Age: "<<p.age<<endl;
  cout<<"Club: "<<p.club<<endl;
  cout<<"Position: "<<p.pos<<endl;
  cout<<"Active: "<<active<<endl;
  cout<<"---------------------------"<<endl;
}

int main(){
  // creating a pointer for struct
  Player* i;
  // new keyword allocate the memory to struct and returns a pointer
  i = new Player;
  // accessing data members in pointer
  i->name = "i";
  i->club = "FCB";
  i->age = 32;
  i->pos = md;
  i->active = true;
  // passing struct which is value at pointer i
  printPlayer(*i);
  // freeing up memory after operations are complete to avoid memory leaks
  delete i;
  return 0;
};
