/**
 * @Author: Amit Chanchal <amit>
 * @Date:   29-May-2017
 * @Email:  amit.chanchal@hotmail.com
 * @Filename: friendFunc2.cpp
 * @Last modified by:   amit
 * @Last modified time: 29-May-2017
 */
 #include <iostream>
using namespace std;

/*
   A more meaningful use would to when you need to operate on objects of
   two different classes. That's when the friend function can be very helpful.

   You can definitely operate on two objects of different classes without using
   the friend function but the program will be long, complex and hard to understand.
 */

// forward declaration
class B;
class A {
private:
int numA;
public:
A() : numA(12) {
}
// friend function declaration
friend int add(A, B);
};

class B {
private:
int numB;
public:
B() : numB(1) {
}
// friend function declaration
friend int add(A, B);
};

// Function add() is the friend function of classes A and B
// that accesses the member variables numA and numB
int add(A objectA, B objectB)
{
        return (objectA.numA + objectB.numB);
}

int main()
{
        A objectA;
        B objectB;
        cout<<"Sum: "<< add(objectA, objectB);
        return 0;
}
