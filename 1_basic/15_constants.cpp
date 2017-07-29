/*
  @file: basic/15_constants.cpp
  @subject: using enums
  @author: amit chanchal <amit.chanchal@hotmail.com>
  @date: April 2017
*/
#include <iostream>

using namespace std;

/*
    By adding the keyword const to a declaration, we indicate that the value of the associated 
    object cannot be changed. Constants may be used virtually anywhere that literals can be used, 
    for example, in an array declaration. As a hint to the reader, we will use all capital letters when naming constants.
*/

int main(){
    const double PI = 3.14159265;
    const int LIMIT_PEOPLE []= {25, 20,15, 30, 50};
    const int OP_HOURS = 8;
    const int OP_HOURS_WEEK = 7* OP_HOURS; // constant expression
    int totalPeopleHourly[OP_HOURS_WEEK]; 
    return 0;
}