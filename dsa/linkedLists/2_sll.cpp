/**
 * @Author: Amit Chanchal <amit>
 * @Date:   09-Jul-2017
 * @Email:  amit.chanchal@hotmail.com
 * @Filename: 2_sll.cpp
 * @Last modified by:   amit
 * @Last modified time: 21-Jun-2017
 */
#include <iostream>
// Linked List implementation
using namespace std;

// We are using struct to define the node which is going to hold data and link to next node in the list
struct node {
        // data field hold the data
        int data;
        // next stores the pointer to next Node
        struct node *next;
};


// Creating a class to manage the operations on the SinglyLinkedList
class SLL {
private:
    // head and tail are two important data that we need to reference our list
    node* head;
    node* tail;
    
public:

        //Constructor Function
        SLL();

        // Creating a node
        void createNode(int val);

        // Checking if the node is empty
        bool empty();

        //Displaying the nodes in the List
        void display();

        //Insertion operations, insert at start, insert at end and insert at any position
        void insertAtStart(int val);

        //Inserting node at the end of the list
        void insertAtEnd(int val);

        // Inserting node at a particular position in the LIST
        void insertAtPos(int val, int pos);

        //Deletion at the start
        void deleteFirst();

        //Deletion at the end
        void deleteLast();

        //Deletion at a particular position
        void deleteAtPos(int pos);

        // LENGTH of the List
        int length();

}; // End of Class


// DEFINITIONS FOR CLASS METHODS

//Constructor Function
SLL::SLL(){
        head = NULL;
        tail = NULL;
}

// Creating a node
void SLL::createNode(int val){
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

// Checking if the list is empty
bool SLL::empty(){
        return head ==NULL;
}

//Displaying the nodes in the List
void SLL::display(){
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
void SLL::insertAtStart(int val){
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

//Inserting node at the end of the list
void SLL::insertAtEnd(int val){
        node *temp = new node;
        temp->data = val;
        tail->next = temp;
        tail = temp;
}

// Inserting node at a particular position in the LIST
void SLL::insertAtPos(int val, int pos){
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

//Deletion at the start
void SLL::deleteFirst(){
        node *temp = new node;
        temp = head;
        head = head->next;
        delete temp;
}

//Deletion at the end
void SLL::deleteLast(){
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
void SLL::deleteAtPos(int pos){
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

// LENGTH of the List
int SLL::length(){
        node *temp = new node;
        temp = head;
        int length = 0;
        while(temp->next!=NULL) {
                length++;
                temp = temp->next;
        }
        return length;
}

void displayOptions(){
        cout<<"Please select one of the following options:"<<endl;
        cout<<"\t1: Add a new Node "<<endl;
        cout<<"\t2: Display all Nodes"<<endl;
        cout<<"\t3: Delete First Node"<<endl;
        cout<<"\t4: Delete Last Node"<<endl;
        cout<<"\t0: To exit!"<<endl;
}

int main(){
        SLL myList;
        int userOption = 1; 
        while(userOption != 0){
                displayOptions();
                cout<<"Please select your option:";
                cin>>userOption;
                switch(userOption){
                        case 1:
                                int data;
                                cout<<"Enter the data to be stored in the Node:";
                                cin>>data;
                                myList.createNode(data);
                                break;
                        case 2:
                                cout<<"Displaying details of the list"<<endl;
                                cout<<"Length of the list: "<<myList.length()<<endl;
                                myList.display();
                                break;
                        case 3:
                                if(myList.empty()){
                                        cout<<"No nodes to delete!"<<endl;
                                } else {
                                        myList.deleteFirst();
                                } 
                                break;
                        case 4:
                                if(myList.empty()){
                                        cout<<"No nodes to delete!"<<endl;
                                } else {
                                        myList.deleteLast();
                                } 
                                break;
                        default:
                        userOption = 0 ;
                        break;
                }
        }

        return 0;
}


