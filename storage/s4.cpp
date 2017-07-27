/*
  @file: storage/s4.cpp
  @subject: Sorting an Array
  @author: amit chanchal <amit.chanchal@hotmail.com>
  @date: April 2017
*/
#include <iostream>

using namespace std;

// Function declaration or prototypes
void sort (int numArray[]);
int smallestInRange(int numArray[], int index);

// Main Function
int main(){
  // A test array with 10 numbers
  int numbers[10] = {1,4,5,2,8,11,23,12,6,45};
}

// sorting function, does only ascending(smallest to biggest)
void sort (int numArray[]){
  // just for time being we will use placeholder length
  int lengthOfArray = 10;
  int index;
  for(int i=0; i<length; i++){
    index = smallestInRange(numArray, i);
    swap(numArray, i, index);
  }
}

int smallestInRange(int numArray[], int index){
  int lastSortedIndex = index;
  int lengthOfArray = 10;
  for(int i = index+1; i < lengthOfArray; i++ ){
    if(array[i]< array[lastSortedIndex]){
      
    }
  }


}
