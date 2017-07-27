/**
 * @Author: Amit Chanchal <amit>
 * @Date:   18-Jul-2017
 * @Email:  amit.chanchal@hotmail.com
 * @Filename: myAccount.cpp
 * @Last modified by:   amit
 * @Last modified time: 18-Jul-2017
 */
#include <iostream>
#include "Account.h"

using namespace std;

int main(){
  Account myAcc;
  cout<<"Balance"<<myAcc.display()<<endl;
  myAcc.deposit(10);
  cout<<"Balance"<<myAcc.display()<<endl;
  myAcc.withdraw(5);
  cout<<"Balance"<<myAcc.display()<<endl;
  return 0;
}
