/*
  @file: basic/7_2dArray.cpp
  @subject: Basic array
  @author: amit chanchal <amit.chanchal@hotmail.com>
  @date: April 2017
*/

#include <iostream>

using namespace std;

int main(){
  string  courses[5] = {"mathematics", "physics", "chemistry", "biology", "english"};
  int totalClassMarks[5] = {0,0,0,0,0};
   /*
     We have scores of  5 students {a1,a2,...,a5} represented by results, with score arranged in the order they 
     appear in courses array. We can loop over the entire set of scores for all students by using a nested for loop.
     We will have one loop which picks up the score set by student and another loop inside of it which loops over 
     the scores in each subjects.
  */
  int results[5][5] = {
    {12, 8, 11, 9 , 10},
    {10, 13, 15, 14, 11},
    {8, 9, 9, 7, 11},
    {12, 13, 11, 11, 14},
    {3, 4, 8, 10, 11}
  };
 

  /*
    First iteration to add everyones marks and store it in totalClassMarks array by subject exactly as in courses array.
    so results[0][1] is the first students mathematics marks (as courses[0] = math)
  */
  for (int i =0; i<5; i++){
    for(int j = 0; j<5; j++){
      // totalClassMarks add 
      totalClassMarks[j] +=results[i][j];
    }
  }

  for (int i =0; i<5; i++){
    cout<<"- - - - - - --  ScoreCard for student "<<i<<" - - - - - - - - -- - - "<<endl;
    for(int j = 0; j<5; j++){
      cout<<courses[j]<<" :"<< results[i][j];
      // Comparing students marks in subject 'j' with the average (totalClassMarks/5)
      if ( results[i][j] >= (totalClassMarks[j]/5) ){
        cout<<" <Above average>"<<endl;
      } else {
        cout<<" <Below average>"<<endl;
      }
    }

  }
  return 0;
}