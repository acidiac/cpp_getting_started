/**
 * @Author: Amit Chanchal <amit>
 * @Date:   22-Jun-2017
 * @Email:  amit.chanchal@hotmail.com
 * @Filename: lltest.cpp
 * @Last modified by:   amit
 * @Last modified time: 20-Jul-2017
 */
#include <iostream>
using namespace std;

struct node{
  int data;
  struct node *next;
};

class List{
private:
  node *head, *tail;
public:
  //constructor
  List(){
    head = NULL;
    tail = NULL;
  }

  void createNode(int item){
    node *temp = new node;
    temp->data = item;
    temp->next = NULL;
    if(head == NULL){
      head = temp;
      tail = temp;
      temp = NULL;
    } else{
      tail->next = temp;
      tail = temp;
    }
  }

  void insertAtStart(int item){
    node *temp = new node;
    temp->data = item;
    temp->next = head;
    head =temp;
  }

  void insertAtEnd(int item){
    node *temp = new node;
    temp->data = item;
    tail->next = temp;
    tail = temp;
  }

  void insertAtPos(int item, int pos){
    node *temp = new node;
    temp->data = item;
    node *curr = new node;
    node *after = new node;
    curr = head;
    for(int i=1; i<pos; i++){
      curr = curr->next;
    }
    after = curr->next;
    curr->next = temp;
    temp->next = after;
  }

  void display(){
    node *temp = new node;
    temp = head;
    cout<<"Total length of the list: "<< length()<<endl;
    cout<<"----------------------------------"<<endl;
    while (temp != NULL){
      cout<<"[ "<< temp->data<<" ]-->";
      temp = temp->next;
    }
    cout<<"NULL"<<endl;
  }

  int length(){
    node *temp = new node;
    temp = head;
    int count = 0;
    while(temp != NULL){
      temp = temp->next;
      count++;
    }
    return count;
  }

};


int main(){
  List my;
  my.createNode(12);
  my.insertAtStart(10);
  my.insertAtEnd(13);
  my.insertAtPos(11,1);
  my.display();
  return 0;
}
