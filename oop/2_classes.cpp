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
// A sample rectangle class
typedef struct{
    double x;
    double y;
} Point;

class Rectangle{
    private:
    Point a = NULL;
    Point b = NULL;
    Point c = NULL;
    Point d = NULL;

    public:
    // Constructor function, we have three ways we can initialize this class (remember function overloading?)
    // As a good practice we do not include function definitions in the class body 
    Rectangle(Point x, double ab, double bc);
    Rectangle (double ab, double bc);
    Rectangle(Point x, Point y , Point z, Point w);
    // getting the area of the rectangle
    double area( );
    // getting perimeter of the rectangle
    double perimeter();
    // checking if two rectangles are same
    bool isIdentical(Rectangle);
    // a destructor 
    ~Rectangle();
}

Rectangle::Rectangle(Point x, double ab, double bc){
    a.x = x.x;
    a.y = x.y;
    b.x = a.x + ab;
    b.y = a.y;
    c.x = b.x;
    c.y = b.y + bc;
    d.x = a.x;
    d.y = c.y;
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