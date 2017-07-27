/**
 * @Description: Introduction to structs
 * @Author: Amit Chanchal <amit>
 * @Date:   30-Apr-2017
 * @Email:  amit.chanchal@hotmail.com
 * @Filename: s1.cpp
 * @Last modified by:   amit
 * @Last modified time: 30-Apr-2017
 */
#include <iostream>
#include <string>

using namespace std;

/*
   when we are dealing with data which are not just a bunch of numbers but rather
   a logical groups of item then arrays can get cumbersome to use.Imagine if we had
   to store information related to students marks in a class of 10.
   we will have to store them as
   String studentName[10];
   int scoreMaths[10];
   int scoreScience[10];
   int scoreEnglish[10];
   int scoreGeography[10];
   int scoreSocialScience[10];

   that very soon becomes too much to handle!!!

   Structures to rescue!!
   --------------------------------------------------------
   structure in C and C++ allow us to define a datatype which are logically related.
   They are essentially a compound datatype with few type declarations contained within
   them.

   for the above using structure or struct we could
   struct studentScore{
     String studentName;
     int scoreMaths;
     int scoreScience;
     int scoreEnglish;
     int scoreGeography;
     int scoreSocialScience;
  };

  Our freshly minted struct can now hold all the scores of one student and this way
  we don't run into trouble of messing up stuff. Neat huh!?
*/

// We want to have our definition available throughout the program so we have
// declared it outside our function making it global. We will discuss that later
struct studentScore{
  string studentName;
  int scoreMaths;
  int scoreScience;
  int scoreEnglish;
  int scoreGeography;
  int scoreSocialScience;
};

int main(){
  //let's begin by taking tiny steps
  studentScore score;
  cout<<"Students Name";
  cin>>score.studentName; // We access data inside struct using dot "." operator
  cout<<"Please enter the scores of the respective subjects"<<endl;
  cout<<"Science:";
  cin>>score.scoreScience;
  cout<<"Maths:";
  cin>>score.scoreMaths;
  cout<<"English:";
  cin>>score.scoreEnglish;
  cout<<"Geography: ";
  cin>>score.scoreGeography;
  cout<<"Social Science: ";
  cin>>score.scoreSocialScience;

  // Before we do anything fancy let's see if it works!
  cout<<"-------------Student's Details-----------"<<endl;
  cout<<"Student Name: "<< score.studentName<<endl;
  cout<<"Result---------------"<<endl;
  cout<<"Science: "<< score.scoreScience<<endl;
  cout<<"Maths: "<< score.scoreMaths<<endl;
  cout<<"English: "<< score.scoreEnglish<<endl;
  cout<<"Geography: "<< score.scoreGeography<<endl;
  cout<<"Social Science: "<< score.scoreSocialScience<<endl;
}
