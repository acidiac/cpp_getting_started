/**
 * @Author: Amit Chanchal <amit>
 * @Date:   03-Jun-2017
 * @Email:  amit.chanchal@hotmail.com
 * @Filename: polymorph2.cpp
 * @Last modified by:   amit
 * @Last modified time: 03-Jun-2017
 */
#include <iostream>
using namespace std;

void volume(int); // Volume cube = a3 = a × a × a
void volume(int, int); // Volume cylinder = pi × r2× h
void volume (int, int, int);  // Volume cuboid = l x b x h

int main(){
    int option,l,r,b,h,a;
    cout<< "Calculating volume"<<endl;
    cout<< "Please enter an option for solid"<<endl;
    cout<<"1 for Cube\n2 for Cylinder\n3 for Cuboid"<<endl;
    cin>> option;
    switch(option) {
    case 1:
        cout<<"Enter length of the side"<<endl;
        cin>> a;
        volume(a);
        break;
    case 2:
        cout<<"Enter height"<<endl;
        cin>>h;
        cout<<"Enter radius"<<endl;
        cin>>r;
        volume(r,h);
        break;
    case 3:
        cout<<"Enter length"<<endl;
        cin>>l;
        cout<<"Enter width"<<endl;
        cin>>b;
        cout<<"Enter height"<<endl;
        cin>>h;
        volume(l,b,h);
        break;
    default:
        cout<<"Not valid option!"<<endl;
    }
    return 0;
}

// Volume cube = a3 = a × a × a
void volume(int a){
    int v = a*a*a;
    cout<<"Volume of the cube: "<< v << endl;
}

// Volume cylinder = pi × r2× h
void volume(int r, int h){
    double v = 3.14 * r * r * h;
    cout<<"Volume of the Cylinder: "<< v << endl;
}

// Volume cuboid = l x b x h
void volume(int l, int b, int h){
    int v = l*b*h;
    cout<<"Volume of the cuboid: "<< v << endl;
}
