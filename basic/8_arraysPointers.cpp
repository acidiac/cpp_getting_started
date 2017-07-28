/*
  @file: basic/8_arrayPointers.cpp
  @subject: Basic array
  @author: amit chanchal <amit.chanchal@hotmail.com>
  @date: April 2017
*/

#include <iostream>
using namespace std;

/*
    The way arrays are implemented in C++ is inherited
    the name of an array is equivalent to a pointer to the array’s initial element and vice versa. In the example below, 
    c is an array of characters, and p and q are pointers to the first element of c. They all behave essentially the same!
*/

int main (){
    int numbers[5] = {1,2,3,4,5};
    int* pointerToArray = &numbers[0];
    bool test;

    // accessing all elements for array using arrays notations
    for (int i = 0; i<5; i++){
        // '\t' is  a string literal which adds a tab to the output
        cout<<numbers[i]<<"\t";
    }
    cout<<endl;

    //Lets try doing it using pointers, it will work the same
    for (int j = 0; j<5; j++){
        cout<< *(pointerToArray+j) << "\t";
    }
    cout<<endl;
    /*
        the way arrays are implemented under the hood make for some interesting outcomes. We cannot compare 2 arrays
        as we can do with other variables.
        so if, 
        int a[5] = {1,2,3,4,5}; and int b[5] = {1,2,3,4,5};
        (a==b) will evaluate to false or you will see the warning message 
        warning: array comparison always evaluates to false (-Wtautological-compare)

        this is happening because when we compare arrays what is compared is whether they have the same memory location
        in essence &a == &b, which is obviously not the case.
    */
    int a[5] = {1,2,3,4,5}; 
    int b[5] = {1,2,3,4,5};

    test =  (a==b) ;
    cout<< test <<endl;
    test =  (&a==&b) ;
    cout<<&a << ", "<<&b<<endl; // 0x7fff518198e0,  0x7ff518198c0, which is  not same!
    cout<< test <<endl;

    return 0;
}