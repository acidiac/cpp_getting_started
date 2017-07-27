/**
 * @Author: Amit Chanchal <amit>
 * @Date:   21-Jun-2017
 * @Email:  amit.chanchal@hotmail.com
 * @Filename: 2b_stacksLL.cpp
 * @Last modified by:   amit
 * @Last modified time: 21-Jun-2017
 */
#include <iostream>

using namespace std;

struct node {
        int data;
        node *next;
}

class StackWithList {
private:
node *top;
int count;
public:
StackWithList(){
        top = NULL;
        count = 0;
}

// Adding a element to Stack
void push(int val){
        node *temp = new node;
        temp->data = val;
        temp->link = top;
        top = temp;
        count++;
}

// Removing element from Stack
int pop(){
        node *temp = new node;
        int popped;
        if(isEmpty()) {
                cout<<"Stack Underflow"<<endl;
        }
        else{
                popped = top->data;
                temp = top->link;
                delete top;
                top = temp;
                cout--;
                return popped;
        }
}

// Get the element on the top of the Stack
int getTop() {
        return top->data;
}

// Get the size of the Stack
int Size()
{
        return count;
}

// check if stack is empty
bool isEmpty()
{
        return ( top == NULL ) ? true : false;
}

}; // end class

int main(){
        int main()
        {
                StackWithList s;
                try {
                        if ( s.isEmpty() )
                        {
                                cout << "Stack is empty" << endl;
                        }
                        // Push elements
                        s.Push(100);
                        s.Push(200);
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
        return 0;
}
