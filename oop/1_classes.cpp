/*
  @file: oop/1_classes.cpp
  @subject: using enums
  @author: amit chanchal <amit.chanchal@hotmail.com>
  @date: April 2017
*/
#include <iostream>

using namespace std;

/*
    the generic structure of class
    class <class-name> {
        private:

        <data members>
        ...
        <member functions>
        ...
        public:
        // These members provide access to class objects and is also called public interface 
        <data members>
        ...
        <member functions>
        ...
    }
*/
// A sample rectangle class, keeping it simple for now
class Rectangle{
    private:
    double lenA;
    double lenB;

    public:
    // Constructor function, we have three ways we can initialize this class (remember function overloading?)
    // As a good practice we do not include function definitions in the class body 
    Rectangle();
    Rectangle (double ab, double bc);

    // Getting area of the rectangle
    double area( );

    // getting perimeter of the rectangle
    double perimeter();

    // destructor
    ~Rectangle();
}


Rectangle::Rectangle (double ab, double bc){
    // assuming point a to be at (0,0)
    a.x = 0;
    a.y = 0;

}

Rectangle::Rectangle(Point x, Point y , Point z, Point w){
    a = x;
    b = y;
    c = z;
    d = w;
}

double Rectangle::area( ){


}

double Rectangle::perimeter( ){

}

bool Rectangle::isIdentical(Rectangle){

}

Rectangle::~Rectangle(){

}