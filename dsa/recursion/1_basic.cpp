#include <iostream>
using namespace std;

/*
    Its a approach to looping where a function refers to itself in its own definition. For us to use recursion in a situation
    two consitions must be satisfied
        1: It must contain oneor more base cases
        2: it must contain a recursive case

    No idea what they mean?? we will see the classic factorial example below
    Factorial of 4 = 4*3*2*1
        which is essential 4* factorial of 3
        4*3* factorial of 2  and so on...
    
    Base Case factorial(n), when (n = 0) is 1
    Recursive Case: n * factorial(n-1) for all (n>1)
*/

int recFatorial(int n){
    if(n==0){
        return 1;
    } else {
        return n* recFatorial(n-1);
    }
}

int main(){
    int userInput, result;
    cout<<"Please enter a number: ";
    cin>>userInput;
    result = recFactorial(userInput);
    cout<<"Factorial of "<<userInput<<" is "<<result<<endl;
    return 0;
}

