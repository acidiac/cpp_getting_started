#include <iostream>
/*
    Array is a collection of object of same datatype. 'int marks[10]' is an array of variable name marks with 10 elements.
    Arrays are indexed collections which means first one is referred as 0th element.
    int marks[4] = {2,4,3,5};
    We can declare and initialize arrays with value like other variables.
*/
using namespace std;

int main(){
    // Test Scores of 5 attempts 
    int marks[5] = {20, 22, 19, 15,17};
    int sum = 0, average;
    cout<<"Score in first attempt: "<<marks[0]<<endl;
    cout<<"Score in second attempt: "<<marks[1]<<endl;
    // we will see loop later on this is just a demonstration of way to iterate over each element in the array
    for(int i =0; i<5; i++){
        sum += marks[i];
    }
    average = sum /5;
    cout<<"Average scoe in all attempts: "<< average<<endl;
    
    return 0;
}