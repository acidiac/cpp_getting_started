/**
 * @Author: Amit Chanchal <amit>
 * @Date:   29-May-2017
 * @Email:  amit.chanchal@hotmail.com
 * @Filename: friendFunc.cpp
 * @Last modified by:   amit
 * @Last modified time: 29-May-2017
 */

#include <iostream>

using namespace std;

/*
   FRIEND FUNCTIONS
   One of the important concepts of OOP is data hiding, i.e.,
   a nonmember function cannot access an object's private or protected data.But,
   sometimes this restriction may force programmer to write long and complex codes.
   So, there is mechanism built in C++ programming to access private or
   protected data from non-member functions.This is done using a
   friend function or/and a friend class.

   If a function is defined as a friend function then, the private and protected data
   of a class can be accessed using the function.The complier knows a given function
   is a friend function by the use of the keyword friend.

   For accessing the data, the declaration of a friend function should be made
   inside the body of the class (can be anywhere inside class either in private or
   public section) starting with keyword friend.
 */

class Rectangle {
public:
//constructor definition
Rectangle(double l=2, double w=2){
        length = l;
        width = w;
}
// Method to calculate area
double area(){
        return length*width;
}
// Method to calculate perimeter
double perimeter(){
        return 2*(length+width);
}
// Method to check if rectangle is a square
bool isSquare(){
        return (length == width);
}
// method to add area of two rectangles
double areaAdd (Rectangle rec){
        return this->area() + rec.area();
}
// declaring a friend function which can access the private variables and methods
friend double doubleArea(Rectangle);

private:
double length;
double width;
};

double doubleArea(Rectangle r){
        return r.area()*2;
}

int main(void){
        Rectangle r1(2,3);
        cout<<"Area of rectangle: "<< r1.area()<< endl;
        // doubling the area using friend function
        cout<<"Doubling the Area: "<<doubleArea(r1)<< endl;
        return 0;
}
