/*
  @file: storage/s6.cpp
  @subject: Sorting an Array {{BUBBLE SORT}}
  @author: amit chanchal <amit.chanchal@hotmail.com>
  @date: April 2017
*/
#include <iostream>

using namespace std;

// Function declarations
// Main sorting algorithm
void bubbleSort(int numArray[], int size, char flag);
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
void bubbleSort(int numArray[], int size, char flag){
  cout<<"Bubblesort start!"<<endl;
  cout<<"--------------------------"<<endl;
  // Main loop which traverses through the array items
  if(flag =='a'){
    for (int i = 1; i < size; i++){

  }
  else if (flag == 'd'){

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
