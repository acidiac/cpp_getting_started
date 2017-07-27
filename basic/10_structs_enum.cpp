/*
  @file: basic/prg10.cpp
  @subject: using enums
  @author: amit chanchal <amit.chanchal@hotmail.com>
  @date: April 2017
*/
#include <iostream>
#include <string>
using namespace std;

/**
  enum stores integer value here we will have
  fw = 0 , md = 1, wn = 2 and so on...
  They are effective way of storing one value out of many possible values
*/
enum Position {fw, md, wn, df, gk};

/*
  Struct is a good way to package related data together.
  below Player struct packs information such as name, age, active ...
  Member variables can be accessed through dot notation.
  if we wanted name of the player we will have to use player.name
*/
struct Player{
  string name;
  int age;
  bool active;
  Position pos;
  string club;
};

// Just some garbage function that prints out player information not important for this demostration
void printPlayer(Player p){
  string active = (p.active) ? "yes" : "no";
  cout<<"PLAYER DETAILS ------------"<<endl;
  // Notice the use of dot operator to access data within struct
  cout<<"Name: "<<p.name<<endl;
  cout<<"Age: "<<p.age<<endl;
  cout<<"Club: "<<p.club<<endl;
  cout<<"Position: "<<p.pos<<endl;
  cout<<"Active: "<<active<<endl;
  cout<<"---------------------------"<<endl;
}

int main (){
  // As player is now a composite we can use it as any other datatype
  // Here we are storing information about messi in player struct
  Player messi = {"Messi Leonel", 30, true, fw, "FC Barcelona"};
  printPlayer(messi);
  return 0;
}
