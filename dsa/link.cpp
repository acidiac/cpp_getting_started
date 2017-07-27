/**
 * @Author: Amit Chanchal <amit>
 * @Date:   23-Jun-2017
 * @Email:  amit.chanchal@hotmail.com
 * @Filename: link.cpp
 * @Last modified by:   amit
 * @Last modified time: 23-Jun-2017
 */
#include <iostream>

using namespace std;

struct node {
  int data;
  struct node *next;
};

class List{
private:
  node *head, *tail;
public:
  List(){
    head = NULL;
    tail = NULL;
  }

  void createNode(int item){
    node *temp = new node;
    temp->data = item;
    temp->next = NULL;
    if(head==NULL){
      head = temp;
      tail = temp;
    }else{
      tail->next = temp;
      tail = temp;
    }
  }

  void insertAtStart(int item){
    node *temp = new node;
    temp->data = item;
    temp->next = head;
    head = temp;
  }

  void insertAtEnd(int item){
    node *temp = new node;
    temp->data = item;
    temp->next = NULL;
    tail->next = temp;
    tail = temp;
  }

  void insertAtPos(int item, int pos){
    node *temp = new node;
    node *curr = new node;
    node *right = new node;
    curr = head;
    temp->data = item;
    for(int i=1; i<pos; i++){
      curr = curr->next;
    }
    right = curr->next;
    temp->next = right;
    curr->next = temp;
  }

  void display(){
    node *temp = new node;
    temp = head;
    while(temp != NULL){
      cout<<temp->data<<"\t";
      temp= temp->next;
    }
    cout<<endl;
  }



};

int main(){
  List m;
  m.createNode(10);
  m.insertAtEnd(12);
  m.insertAtStart(9);
  m.insertAtPos(11,2);
  m.display();
  return 0;
}
