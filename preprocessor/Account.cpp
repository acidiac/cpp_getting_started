/**
 * @Author: Amit Chanchal <amit>
 * @Date:   18-Jul-2017
 * @Email:  amit.chanchal@hotmail.com
 * @Filename: Account.cpp
 * @Last modified by:   amit
 * @Last modified time: 18-Jul-2017
 */
#include <iostream>
#include "Account.h"

using namespace std;

Account::Account(){
  balance = 0;
}

int Account::deposit(int amount){
  balance =  balance + amount;
  return balance;
}

int Account::withdraw(int amount){
  if(balance< amount){
    cout<<"Low balance"<<endl;
    return 0;
  }
  else {
    balance = balance - amount;
    return balance;
  }
}

int Account::display(){
  return balance;
}
