/*
  @file: basic/4_enumeration.cpp
  @subject: enumeration datatyp
  @author: amit chanchal <amit.chanchal@hotmail.com>
  @date: April 2017
*/
#include <iostream>
using namespace std;

int main(){
    enum Day{sun, mon, tue, wed, thu, fri, sat };
    enum ShapeNumSides {rectangle = 4, triangle = 3, pentagon = 5, line =1 };
    Day today = sun;
    Day tommorrow = mon;
    ShapeNumSides logo = rectangle;
    ShapeNumSides pointer = triangle;
    // will print o and 1 respectively
    cout<<"Today"<< today<<endl;
    cout<<"Tomorrow"<< tommorrow<< endl;
    
    // This will print out custom values that we have assigned
    cout<<"Number of sides in the logo: "<< logo<<endl;
    cout<<"Number of sides in the pointer: "<< pointer<<endl;
    return 0;
}