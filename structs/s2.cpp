/**
 * @Author: Amit Chanchal <amit>
 * @Date:   30-Apr-2017
 * @Email:  amit.chanchal@hotmail.com
 * @Filename: s2.cpp
 * @Last modified by:   amit
 * @Last modified time: 01-May-2017
 */

#include <iostream>
#include <string>

using namespace std;

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

// function prototypes
void addScores(studentScore score[], int index);
void displayResult(studentScore score[], int length);

int main(){
  int numStudents;
  cout<<"Total students in class:";
  cin>>numStudents;
  studentScore classScore[numStudents];
  for(int i=0; i<numStudents; i++){
    addScore(classScore, i);
  }
  displayResult(classScore, numStudents);
}


void addScores(studentScore score[], int index){
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

}


void displayResult(studentScore score, int length){

}
