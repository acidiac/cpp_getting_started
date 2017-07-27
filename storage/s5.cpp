/*
  @file: storage/s4.cpp
  @subject: Sorting an Array {{INSERTION SORT}}
  @author: amit chanchal <amit.chanchal@hotmail.com>
  @date: April 2017
*/

#include <iostream>

using namespace std;

/*
  What is an insertion sort?
  ----------------------------------
  This is an in-place comparison-based sorting algorithm. Here, a sub-list is
  maintained which is always sorted. For example, the lower part of an array
  is maintained to be sorted. An element which is to be 'insert'ed in this
  sorted sub-list, has to find its appropriate place and then it has to be
  inserted there. Hence the name, insertion sort.

  The array is searched sequentially and unsorted items are moved and inserted
  into the sorted sub-list (in the same array).

  How does it work?
  ---------------------------------------
  Let's say we have a array of numbers, which we want to sort in ascending order.
  int num[6] = {2,46,1,5,8,3};
  Here we compared items with one left to it and if they are smaller we swap them
  step1:  (index 0) --> there is nothing on left to compare value with

  step2:  (index 1) --> if (num[1]< num[0]){swap(1,0, num)}
          (46<2) // which evaluates to false so we do nothing

  step3:  (index 2) --> (1<46) evaluates to true, hence we swap
          [2,1,46,5,8,3]
          (1 < 2)? // true so we swap again
          [1,2,46,5,8,3]
          now we have items till index 3 swapped don't worry about rest yet,
          we will deal with them  one by one.

  we repeat this till we are at last index

  Do we implement this?
  -------------------------
  {Variables}
  int size; //size of array to know how many iterations we want
  int i,j; //index to manage two loops one larger one and another one to compare
  int temp; //to store value when we swap

  When to use it?
  -------------------
  These algorithms are not the most efficient ones and generally are used for
  smaller sets of data. This algorithm is not suitable
  for large data sets as its average and worst case complexity are of Ο(n2),
  where n is the number of items.

*/
// Function declarations
// Main sorting algorithm
void insertionSort(int numArray[], int size, char flag);
// function to swap values
void swapItems(int indexRight, int indexLeft, int numArray[]);
//Getting input
void arrayInput(int numArray[], int size);
// Displaying array
void displayArray(int numArray[], int size);

int main(){
  int size;
  char option;
  cout<<"How many elements you want in the array?";
  cin>>size;

  int numbers[size];
  //arrayInput(int numArray[], int size)
  arrayInput(numbers, size);

  cout<<"------ Array before Sorting ------"<<endl;
  displayArray(numbers, size);
  cout<<endl;
  //Getting the input from user for their choice of sort order
  cout<<"Enter the order of sort a for ascending and d for descending:";
  cin>> option;
  insertionSort(numbers, size, option);

  cout<<"------ Array after Sorting ------"<<endl;
  displayArray(numbers, size);
  cout<<endl;
}
/*
  @params
  numArray - Array to be sorted
  size -  Number of elements in the numArray
  flag - a/d for (ascending or descending)
*/
void insertionSort(int numArray[], int size, char flag){
  cout<<"Insertion start!"<<endl;
  cout<<"--------------------------"<<endl;
  // Main loop which traverses through the array items
  if(flag =='a'){
    for (int i = 1; i < size; i++){
      int j = i;
      cout<<"--@index-"<<i<<endl;
      for (j; j>0;  j--){
        if (numArray[j]< numArray[j-1]){
          int left = j-1;
          cout<<"-----@index-left:"<<left<<", index-right:"<<j<<endl;
          swapItems(j, left, numArray);
        }
      }
    }
  }
  else if (flag == 'd'){
    for (int i = 1; i < size; i++){
      int j = i;
      cout<<"--@index-"<<i<<endl;
      for (j; j>0;  j--){
        if (numArray[j]> numArray[j-1]){
          int left = j-1;
          cout<<"-----@index-left:"<<left<<", index-right:"<<j<<endl;
          swapItems(j, left, numArray);
        }
      }
    }
  }
  else { cout<<"Wrong flag selected"<<endl;}

}

/*
  @params
  numArray - Array to be sorted
  indexLeft -Left index of the value to be sorted with right
  indexRight
*/
void swapItems(int indexRight, int indexLeft, int numArray[]){
  cout<<"----------swapping value@"<<indexRight<<"["<<numArray[indexRight]<<"]"<< " with value@"<<indexLeft<<"["<<numArray[indexLeft]<<"]"<<endl;
  int temp = numArray[indexRight];
  numArray[indexRight] = numArray[indexLeft];
  numArray[indexLeft] = temp;
}

//Getting input
void arrayInput(int numArray[], int size){
  for (int i = 0; i<size; i++){
    cout<<"Enter the first number";
    cin>>numArray[i];
  }
}
// Displaying array
void displayArray(int numArray[], int size){
  cout<<"---------------------------"<<endl;
  cout<<"Displaying your array"<<endl;
  for (int i=0; i<size; i++){
    cout<<" | "<< numArray[i];
  }
}
