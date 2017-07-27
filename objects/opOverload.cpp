/**
 * @Author: Amit Chanchal <amit>
 * @Date:   30-May-2017
 * @Email:  amit.chanchal@hotmail.com
 * @Filename: opOverload.cpp
 * @Last modified by:   amit
 * @Last modified time: 30-May-2017
 */

#include <iostream>
using namespace std;

class Rectangle {
public:
//constructor definition
Rectangle(double l=2, double w=2){
        length = l;
        width = w;
}
Rectangle operator +(Rectangle r){
        Rectangle newRec;
        newRec.length = this->length + r.length;
        newRec.width = this->width + r.width;
        return newRec;
}
void display(){
        cout<<"Rectangle(l,w) : ("<<length<<", "<<width<<")"<<endl;
}

private:
double length;
double width;
};

int main(void){
        Rectangle r1(2,3);
        Rectangle r2(3,4);
        Rectangle r3 = r1+r2;
        r3.display();
        return 0;
}
