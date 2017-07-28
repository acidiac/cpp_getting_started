/*
  @file: basic/7_2dArray.cpp
  @subject: Basic array
  @author: amit chanchal <amit.chanchal@hotmail.com>
  @date: April 2017
*/

#include <iostream>

using namespace std;

int main(){
  string  courses[5] = {"math", "physics", "chemistry", "biology", "english"};
  int totalClassMarks[5] = {0,0,0,0,0};
  int results[5][5] = {
    {12, 8, 11, 9 , 10},
    {10, 13, 15, 14, 11},
    {8, 9, 9, 7, 11},
    {12, 13, 11, 11, 14},
    {3, 4, 8, 10, 11}
  };
  // We want to add totals for each subject and store it in the totalClassMarks Array
  for (int i =0; i<5; i++){
    for(int j = 0; j<5; j++){
      totalClassMarks[j] +=results[i][j];
    }
  }

  for (int i =0; i<5; i++){
    cout<<"- - - - - - --  ScoreCard for student "<<i<<" - - - - - - - - -- - - "<<endl;
    for(int j = 0; j<5; j++){
      cout<<courses[j]<<" :"<< results[i][j];
      if ( results[i][j] >= (totalClassMarks[j]/5) ){
        cout<<" <Above average>"<<endl;
      } else {
        cout<<" <Below average>"<<endl;
      }
    }

  }
  return 0;
}