/**
 * @Author: Amit Chanchal <amit>
 * @Date:   16-Jun-2017
 * @Email:  amit.chanchal@hotmail.com
 * @Filename: node.cpp
 * @Last modified by:   amit
 * @Last modified time: 16-Jun-2017
 */

#include <iostream>

using namespace std;

class Node {
public:
struct _Node {
        int value;
        _Node *next;
};
//constructor function
Node(int data){
        _Node.value = data;
        _Node.next = NULL;
}
}

int main(){
        Node a(10);
        cout<<a.value;
        cout<<a.next;
        return 0;
}
