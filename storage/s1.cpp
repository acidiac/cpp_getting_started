/*
  @file: storage/s1.cpp
  @subject: Arrays
  @author: amit chanchal <amit.chanchal@hotmail.com>
  @date: April 2017
*/

#include <iostream>

using namespace std;

/*
  An array is a storage datatype which can store several (declared) number of
  data of same type in a sequence.

  let's look at a array my_values which is going to store integers below
  we declare it by,
  syntax: datatype variable_name[length or number of elements];
  usage:  int my_values[4];

            -------------------------------------
            | value1 | value2 | value3 | value4 |
            -------------------------------------
  position  0         1        2        3

  if we want to access value2 we will have to use
  my_values[0] for value1 and so on

  Note of Caution:
  length is the total number and the position begins from zero so the last element
  is always going to be my_values[length-1]
*/

// now lets use this
int main(){
  int my_values[4];
  //lets ask users for four values and store it our freshly minted array my_values
  for (int i = 0; i < 4; i++){
    cout<<"Enter number("<<i<<")";
    cin >>my_values[i];
  }

  /*
    Lets go over the array and print out values just to satisfy ourselves and
    and see how we can use for loop to print array values also called traversing
  */
  cout<<"---------------Displaying program outputs-------------"<<endl;

  for (int i = 0; i < 4; i++){
    cout<<"my_value["<<i<<"]: "<<my_values[i]<<endl;
  }

}
