#include <iostream>

using namespace std;

int main (){
    int a = 10;
    /* 
        'p' is a pointer which point to a memory location of size int, which is delared by datatype* <pointerVarName>, 
        here (int* p). To Access address of a variable we use '&' operator and when we use '&a', 
        it means we are asking for address in memory where value associated with variable 'a' is stored.
        We assign the address of a to pointer p
        To get value at any address we use *<pointerVar>

        Warning!: 
        we cannot use multiple declarations with pointers as with other datatypes
        int a, b, c;  // this works
        int* a, b,c; // This would translate to int*a, int b, int c;

    */
    int* p = &a;
    cout<< "address of a: "<<&a<<endl;
    cout<<" Value at &a: "<< a<<endl;
    cout<<"Address of p: "<< p <<endl;
    cout<<"Value at p: "<<*p<<endl;
    //What if we were to change what the value stored in memory at address p?
    *p = 20;
    cout<<"New value of a: "<< a<<endl;
    // you will see that you have changed the value store at p which is also referred using variable a.
    return 0;
}