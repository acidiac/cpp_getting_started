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
    Rectangle (double a, double b);

    // Inline setter functions
    void  setA (double a){ lenA = a; }
    void setB (double b){lenB = b; }

    // Getting area of the rectangle
    double area( );

    // getting perimeter of the rectangle
    double perimeter();

};

// Defining all the functions in the class by using scope operator "::"
Rectangle::Rectangle (double a, double b){
    lenA = a;
    lenB = b;
}

Rectangle::Rectangle(){
    lenA = 0;
    lenB = 0;
}

double Rectangle::area( ){
    double area;
    area = lenA * lenB;
    return area;
}

double Rectangle::perimeter( ){
    double perimeter;
    perimeter = 2*(lenA+lenB);
    return perimeter;
}



int main (){
    Rectangle a(5,6);
    double area =  a.area();
    cout<<"Area: "<<area<<endl;
    /*  
        with new operator
        new operator assigns memory and returns a pointer to the memory location.
        Rectangle* is a pointer to class Rectangle
    */
    Rectangle* b = new Rectangle(10.1,10.2);
    // Using arrow operator to access contents at the pointer location 
    area = b->area();
    cout<<"Area: "<<area<<endl;
    b->setA(2);
    b->setB(4);
    area = b->area();
    cout<<"Area: "<<area<<endl;
    return 0;
}