/*
  @file: basic/16_typedef.cpp
  @subject: using enums
  @author: amit chanchal <amit.chanchal@hotmail.com>
  @date: April 2017
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

/*
    In addition to associating names with constants, it is often useful to associate a name with a type. 
    This association can be done with a typedef declaration. Rather than declaring a variable, 
    a typedef defines a new type name.
*/

// struct
typedef struct{
    double x; // x coordinate
    double y; // y coordinate
    string label;  
}Coordinate;

// Function prototype
double distTwoPoints( Coordinate a, Coordinate b);

int main (){
    // type BufferPtr is a pointer to char 
    typedef char* BufferPtr; 
    // p is a pointer to char
    BufferPtr p; 

    double distance;
    Coordinate a, b;
    a.x = 12.54;
    a.y = 13.50;
    a.label = "a";
    b.x = 3.4;
    b.y = 5.5;
    b.label = 'b';
    // calculating distance between two points a and b
    distance = distTwoPoints(a,b);
    cout<<"Distance between points: "<<distance<<endl;
    return 0;
}

// ignore the function for now just remember it calculates distance between two point (x1, y1) and (x2, y2)
double distTwoPoints( Coordinate a, Coordinate b){
    double result;
    // Using distance formula ((x2 - x1)^2 + (y2 - y1)^2)^1/2
    result  = sqrt( (pow(a.x, 2.0) - pow(b.x, 2.0)) + (pow(a.y, 2.0) - pow(b.y, 2.0)) );
    return result;
}