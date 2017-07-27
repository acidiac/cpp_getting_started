/**
 * @Author: Amit Chanchal <amit>
 * @Date:   29-May-2017
 * @Email:  amit.chanchal@hotmail.com
 * @Filename: objThis.cpp
 * @Last modified by:   amit
 * @Last modified time: 29-May-2017
 */

#include <iostream>

using namespace std;

/**
   Every object in C++ has access to its own address through an
   important pointer called this pointer. The this pointer is an
   implicit parameter to all member functions. Therefore, inside a member function,
   this may be used to refer to the invoking object.

   Friend functions do not have a this pointer, because friends are not
   members of a class. Only member functions have a this pointer.
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

private:
double length;
double width;
};

int main(void){
        Rectangle r1(1.2, 4.5); // Declared first Rectangle
        Rectangle r2(4, 4); // declared second rectangle
        cout<< "Area of r1: " << r1.area()<< endl;
        cout<<"Area of r2: " << r2.area() << endl;
        // Checking if rectangles are squares
        if (r1.isSquare()) {
                cout<< "r1 is a square"<< endl;
        } else {
                cout<< "r1 is not a square"<< endl;
        }

        if (r2.isSquare()) {
                cout<< "r2 is a square"<< endl;
        } else {
                cout<< "r2 is not a square"<< endl;
        }

        // Adding their areas
        double areas = r1.areaAdd(r2);
        cout<<"combined area of both rectangle is "<< areas<< endl;
        return 0;
}
