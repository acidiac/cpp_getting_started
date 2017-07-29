/*
  @file: basic/14_references.cpp
  @subject: using enums
  @author: amit chanchal <amit.chanchal@hotmail.com>
  @date: April 2017
*/

#include <iostream>
using namespace std;

/*
    Pointers provide one way to refer indirectly to an object. Another way is through references. 
    A reference is simply an alternative name for an object. Given a type T, the notation T& indicates a reference 
    to an object of type T. Unlike pointers, which can be NULL, a reference in C++ must refer to an actual variable. 
    When a reference is declared, its value must be initialized. Afterwards, any access to the reference is treated 
    exactly as if it is an access to the underlying object.
*/

int main(){
    string author = "Samuel Clemens"; 
    // penName is an alias for author
    string& penName = author; 
    // now author = “Mark Twain” 
    penName = "Mark Twain";
    // outputs “Mark Twain
    cout << author;
    return 0;
}

/*
    References are most often used for passing function arguments and are also often used for returning results from functions.
*/