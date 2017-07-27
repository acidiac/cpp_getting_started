/*
  @file: basic/prg2.cpp
  @subject: Basic input and output
  @author: amit chanchal <amit.chanchal@hotmail.com>
  @date: April 2017
*/
#include<iostream>

using namespace std;

int main(){
    int inputNumber, result;
    cout <<"Enter a number\n";
    // getting input from screen through cin function
    cin >> inputNumber;
    result = inputNumber * 2;
    cout << "double of your number"<< result <<"\n" ;
}
