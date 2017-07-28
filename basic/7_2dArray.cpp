/*
  @file: basic/7_2dArray.cpp
  @subject: Basic array
  @author: amit chanchal <amit.chanchal@hotmail.com>
  @date: April 2017
*/

#include <iostream>

using namespace std;

int main(){
  const char * courses[] = {math, physics, chemistry, biology, english};
  int results[5][5] = {
    {12, 8, 11, 9 , 10},
    {10, 13, 15, 14, 11},
    {8, 9, 9, 7, 11},
    {12, 13, 11, 11, 14},
    {3, 4, 8, 10, 11}
  };
  for (int i = 0 ; i < 5; i++){
    cout<<"Scores for student: "<< i<<endl;
    for (int j = 0; j < 5; j++){
       cout<<courses[i]<<": "<< results[i][j]<<endl;
    }
  }
  return 0;
}