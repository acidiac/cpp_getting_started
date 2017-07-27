/**
 * @Author: Amit Chanchal <amit>
 * @Date:   02-Jun-2017
 * @Email:  amit.chanchal@hotmail.com
 * @Filename: vectors.cpp
 * @Last modified by:   amit
 * @Last modified time: 02-Jun-2017
 */

#include <iostream>
#include <vector>

using namespace std;

int main(){
        // Declaring a vector container myVector of type int
        vector<int> myVector;
        // A iterator for the int vector
        vector<int>::iterator myIter;

        // Add some elements to myIntVector
        myVector.push_back(1);
        myVector.push_back(4);
        myVector.push_back(8);

        for(myIter = myVector.begin();
            myIter != myVector.end();
            myIter++)
        {
                /*
                   iterators are pointer like objects and to get the value we use
                   dereferencing operator (*myIter)
                 */
                cout<< *myIter <<" ";
        }
        cout<<"\nOperations complete!"<<endl;
        return 0;
}
