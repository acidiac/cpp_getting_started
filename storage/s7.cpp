/**
 * @Description: Using vectors with arrays
 * @Author: Amit Chanchal <amit>
 * @Date:   05-May-2017
 * @Email:  amit.chanchal@hotmail.com
 * @Filename: s7.cpp
 * @Last modified by:   amit
 * @Last modified time: 05-May-2017
 */

#include <iostream>
#include <vector>

using namespace std;

int main(){
  int count;
  vector<int> v;

  cout<<"Number of elements: ";
  cin>> count;

  v.resize(count);

  for (int i = 0; i<v.size(); i++){
    cout<<"enter the number:";
    cin>> v[i];
  }

  for (int i = 0; i<v.size(); i++){
    cout<< v[i]<<endl;
  }


}
