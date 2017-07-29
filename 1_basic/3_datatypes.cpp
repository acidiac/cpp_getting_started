/*
  @file: basic/3_datatypes.cpp
  @subject: Fundamental Datatypes in C++
  @author: amit chanchal <amit.chanchal@hotmail.com>
  @date: April 2017
*/
#include <iostream>
using namespace std;

int main(){
  int aNumber;
  short aShortNumber;
  long aLargeNumber;
  char aCharacter;
  bool aBool;
  cout<<"Size of int: "<<sizeof(aNumber)<<endl;
  cout<<"Size of short int: "<<sizeof(aShortNumber)<<endl;
  cout<<"Size of long int: "<<sizeof(aLargeNumber)<<endl;
  cout<<"Size of char: "<<sizeof(aCharacter)<<endl;
  cout<<"Size of Boolean data: "<<sizeof(aBool)<<endl;
  return 0;
}
