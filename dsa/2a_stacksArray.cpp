/**
 * @Author: Amit Chanchal <amit>
 * @Date:   21-Jun-2017
 * @Email:  amit.chanchal@hotmail.com
 * @Filename: 2a_stacksArray.cpp
 * @Last modified by:   amit
 * @Last modified time: 21-Jun-2017
 */
#include <iostream>
using namespace std;

// Defining a constant which will be the maximum size of the array
const int MAX_SIZE = 100;

class StackWithArray {
private:
int data[MAX_SIZE];
int top;

public:
StackWithArray(){
        top = -1;
}
// Adding element to a Stack
void push(int val){
        if(isFull()) {
                cout<<"Stack Overflow!"<<endl;
        }
        else {
                top++;
                data[top] = val;
        }
}

//removing element from a Stack
int pop(){
        int popped;
        if(isEmpty()) {

                cout<<"Stack Underflow"<<endl;
        }
        else{
                popped = data[top];
                top--;
        }
        return popped;
}

// topmost element of the Stack
int getTop(){
        return data[top];
}

// Checking if the Stack is empty
bool isEmpty(){
        return ( top == -1 ) ? true : false;
}

// checking if the stack is full
bool isFull(){
        return ( top >= MAX_SIZE ) ? true : false;
}

// current size of the Stack
int size(){
        return top+1; // as the array begins from 0 index
}

}; // end class

int main()
{
        StackWithArray s;
        try {
                if ( s.isEmpty() )
                {
                        cout << "Stack is empty" << endl;
                }
                // Push elements
                s.push(100);
                s.push(200);
                // Size of stack
                cout << "Size of stack = " << s.size() << endl;
                // Top element
                cout << s.getTop() << endl;
                // Pop element
                cout << s.pop() << endl;
                // Pop element
                cout << s.pop() << endl;
                // Pop element
                cout << s.pop() << endl;
        }
        catch (...) {
                cout << "Some exception occured" << endl;
        }
}
