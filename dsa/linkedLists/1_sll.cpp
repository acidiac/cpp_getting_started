/*
  @file: dsa/linkedLists/1_sll.cpp
  @subject: Single Linked Lists
  @author: amit chanchal <amit.chanchal@hotmail.com>
  @date: April 2017
*/
#include <iostream>

using namespace std;

/*
    Please read the markdown document for details. I will jump into implementation here!
    There are many possible ways to implement a singly linked list as with other data structures.
    These are the following things that we are interested in:
        1> Create a node 
        2> Put together node as a list
        3> Add a node to the list (method)
        4> Delete a node (method)
        5> Search a node (method)
        6> Traverse the list (method)
        7> Kill the list
*/

/*
    1. Creating a node 
    We can create a node either as a struct or as a class, we are going to use a class. We are going to store integer value in the data
    for now. In a next example we might implement the same list using templates. With struct we could have used
    struct Node{
        int data;
        struct Node* next;
    };
*/

class Node {
    private:
        int data;   // Integer data that is store in the node 
        Node* next;  // Node pointer pointing to next node in the list

        friend class SLL;  // Providing access to our main linked list class
};

/*
  Class for singly linked list 

*/
class SLL{
public:
    // Function declarations
    SLL();  // list constructor
    ~SLL(); // List destructor
    bool empty();  // checking if the list is empty
    int head();  // getting the data stored in the first/head node
    void addFront(int n);  // adding a node to the beginning to the list
    void removeFront(int n); // removing the first node in the list
    void displayList(); // Prints out the entrie list in sequence
private:
    Node* head;  // pointer to the head/first node in the list
};

SLL::SLL( )
    :head(NULL){ }

SLL::~SLL(){
    while (!empty()){
        removeFront();
    }
}

bool SLL::empty(){
    return head == NULL ;
}

int SLL::head(){
    return head->data;
}

void SLL::addFront(int n){
    Node* newNode = new Node;
    newNode->data = n;
    newNode->next = head;
    head = newNode;
}






