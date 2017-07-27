/**
 * @Author: Amit Chanchal <amit>
 * @Date:   09-Jun-2017
 * @Email:  amit.chanchal@hotmail.com
 * @Filename: 1a_linkedList.cpp
 * @Last modified by:   amit
 * @Last modified time: 21-Jun-2017
 */
#include <iostream>
// Linked List implementation
using namespace std;

struct node {
        // data field hold the data
        int data;
        // next stores the pointer to next Node
        struct node *next;
};

// Creating a class to manage the operations on node
class SLL {
private:
node *head, *tail;
public:
SLL(){
        head = NULL;
        tail = NULL;
}
void createNode(int val){
        // new keywords create and allocates space to the temp node
        node *temp = new node;
        temp->data = val;
        temp->next = NULL;
        // checking if the list is empty
        if(head == NULL) {
                head = temp;
                tail = temp;
                temp = NULL;
        }
        // if not empty then we will assign last node next location to new node temp and
        // make the new node temp the tail
        else{
                tail->next = temp;
                tail = temp;
        }
}

void display(){
        node *temp = new node;
        temp = head;
        cout<<endl<<"----------Displaying the nodes ----------------"<<endl;
        while (temp !=NULL) {
                cout<< temp->data<< "\t";
                temp = temp->next;

        }
        cout<<endl<<endl;
}


//Insertion operations, insert at start, insert at end and insert at any position
void insertAtStart(int val){
        /*
           New node should be connected to the first node, which means the head.
           This can be achieved by putting the address of the head in the next field of the new node.
           New node should be considered as a head.
           It can be achieved by declaring head equals to a new node.
         */
        node *temp = new node;
        temp->data = val;
        temp->next = head;
        head = temp;
}

void insertAtEnd(int val){
        node *temp = new node;
        temp->data = val;
        tail->next = temp;
        tail = temp;
}

void insertAtPos(int val, int pos){
        node *temp = new node;
        node *previous = new node;
        node *current = new node;
        current = head;
        for(int i = 1; i < pos; pos++) {
                previous = current;
                current = current->next;
        }
        temp->data = val;
        previous->next = temp;
        temp->next = current;
}

// DELETION OPERATIONS
//Deletion at the start
void deleteFirst(){
        node *temp = new node;
        temp = head;
        head = head->next;
        delete temp;
}
//Deletion at the end
void deleteLast(){
        node *current = new node;
        node *previous = new node;
        current =  head;
        while(current->next != NULL) {
                previous = current;
                current = current->next;
        }
        tail = previous;
        previous->next = NULL;
        delete current;
}
//Deletion at a particular position
void deleteAtPos(int pos){
        node *current = new node;
        node *previous = new node;
        current = head;
        for (int i=1; i<pos; pos++) {
                previous = current;
                current = current->next;
        }
        previous->next = current->next;
        delete current;
}

// LNEGTH of the List
int length(){
        node *temp = new node;
        temp = head;
        int length = 0;
        while(temp->next!=NULL) {
                length++;
                temp = temp->next;
        }
        return length;
}

}; // End of Class

int main(){
        SLL myList;
        myList.createNode(2);
        myList.createNode(3);
        myList.createNode(4);
        myList.insertAtStart(1);
        myList.insertAtEnd(5);
        myList.display();
        return 0;
}
