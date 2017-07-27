/*
  @file: storage/s1.cpp
  @subject: Passing Arrays to function
  @author: amit chanchal <amit.chanchal@hotmail.com>
  @date: April 2017
*/

#include <iostream>

using namespace std;

// Function prototypes
int avgArrayNumbers(int arrayNums[], int len);
int sumArrayNumbers(int arrayNums[], int len);

// Main function
int main(){
  int avgNumbers, sumNumbers;
  int my_values[4];
  //lets ask users for four values and store it our freshly minted array my_values
  for (int i = 0; i < 4; i++){
    cout<<"Enter number("<<i<<")";
    cin >>my_values[i];
  }

  // Passing array to the function to calculate average and sum
  sumNumbers = sumArrayNumbers(my_values,4);
  avgNumbers = avgArrayNumbers(my_values, 4);

  // Printing out sum and average
  cout<<"Sum of Array Values: "<<sumNumbers<<endl;
  cout<<"Average of Array Values: "<<avgNumbers<<endl;
}

int avgArrayNumbers(int arrayNums[], int len){
  int avg, sum = 0;
  // using the sum function 
  sum = sumArrayNumbers(arrayNums, len);
  avg = sum/len;
  return avg;
}

// function to calculate sum of numbers in the array
int sumArrayNumbers(int arrayNums[], int len){
  int sum = 0;
  for (int i = 0; i < len; i++){
    sum+= arrayNums[i];
  }
  return sum;
}
