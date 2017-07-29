#include <iostream>

using namespace std;

int addIt (int x, int y){
  return x+y;
}

void decorateOut(int input){
  cout<<"Output of your progran"<<endl;
  cout<<input<<endl;
}

int main(){
  int result;
  result = addIt(5,4);
  decorateOut(result);
}
