#include <iostream>

using namespace std;

int main (){
    int a = 10;
    // P is a pointer which point to a memory location of size int
    // We assign the address of a to pointer p
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