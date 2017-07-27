/**
 * @Author: Amit Chanchal <amit>
 * @Date:   18-Jul-2017
 * @Email:  amit.chanchal@hotmail.com
 * @Filename: Account.h
 * @Last modified by:   amit
 * @Last modified time: 18-Jul-2017
 */
#ifndef Account_H
#define Account_H

class Accout{
private:
  int balance;
public:
  Account();
  int deposit(int amount);
  int withdraw(int amount);
  int display();
};

#endif
