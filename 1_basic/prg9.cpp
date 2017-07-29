#include <iostream>

using namespace std;

void fibonnaci(int n);
void julia(int n);

int main(){
  char option;
  int limit;

  cout<<"Enter 'f' - for Fibonacci sequence"<<endl;
  cout<<"Enter 'j' - for Julia sequence"<<endl;
  cout<<"Please select an option"<<endl;
  cin>> option;
  cout<<"Please enter the limit"<< endl;
  cin>> limit;

  switch(option){
    case 'f':
      fibonnaci(limit);
      break;
    case 'j':
      julia(limit);
      break;
    default:
      cout<<"Wrong option selected"<<endl;
      break;
  }

}

void fibonnaci(int limit){
  cout<<"Printing Fibonnaci Series for N="<< limit << endl;

}

void julia(int limit){
  cout<<"Printing Julia Series for N="<< limit << endl;
}
