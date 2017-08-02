/**
 * @Author: Amit Chanchal <amit>
 * @Date:   27-May-2017
 * @Email:  amit.chanchal@hotmail.com
 * @Filename: object1.cpp
 * @Last modified by:   amit
 * @Last modified time: 16-Jun-2017
 */
#include <iostream>

using namespace std;

class Rectangle {
private:
int width, height;
public:
Rectangle(int, int);     //Constructor Function
int area(){
        return width*height;
};
int perimeter(){
        return (width+height)*2;
}
};

Rectangle::Rectangle(int a, int b){
        width = a;
        height = b;
}

int main(){
        Rectangle rec1(5,6); // object of class Rectangle
        Rectangle rec2(10,10); // object of class Rectangle
        cout<< "Area of (rec1): "<< rec1.area()<<endl;
        cout<< "Perimeter of (rec1): "<< rec1.perimeter()<<endl;
        cout<< "Area of (rec2): "<< rec2.area()<<endl;
        cout<< "Perimeter of (rec2): "<< rec2.perimeter()<<endl;
        return 0;
}
