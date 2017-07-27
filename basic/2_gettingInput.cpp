/*
  @file: basic/2_gettingInput.cpp
  @subject: Getting input from the user console
  @author: amit chanchal <amit.chanchal@hotmail.com>
  @date: April 2017
*/
#include <iostream>
using namespace std;

// We can use void main(){...} and we don't have to return anything from the function
int main (){
    // We are creating a varibale to store the value we get from the input
    string name;
    cout<<"Hey whats ur name? :";
    // we get the name and we asign that to varibale name, so that we have a way to refer to it.
    // get comfortable with 'cin>>' and 'cout<<' 
    cin>>name;
    cout<<"Hey, "<<name<<"!!"<<endl;
    return 0;
}