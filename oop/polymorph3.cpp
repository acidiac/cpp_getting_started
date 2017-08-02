/**
 * @Author: Amit Chanchal <amit>
 * @Date:   03-Jun-2017
 * @Email:  amit.chanchal@hotmail.com
 * @Filename: polymorph3.cpp
 * @Last modified by:   amit
 * @Last modified time: 03-Jun-2017
 */
#include <iostream>

using namespace std;

class Greeter {
private:
string name;
public:
virtual void greet(){
    cout<<"Hello! " <<endl;
}
};

class Greeter_es : public Greeter {
public:
void greet(){
    cout<<"Hola!" <<endl;
}
};

class Greeter_fr : public Greeter {
public:
void greet(){
    cout<<"Bonjour! " <<endl;
}
};

int main(){
    Greeter_fr greetFr;
    Greeter_es greetEs;
    Greeter *ptr;
    ptr = &greetEs;
    ptr->greet();
    ptr = &greetFr;
    ptr->greet();
    return 0;
}
/*
output: Hola!
Bonjour!
*/
