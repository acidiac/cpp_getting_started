/*
  @file: basic/9_strings.cpp
  @subject: Basic array
  @author: amit chanchal <amit.chanchal@hotmail.com>
  @date: April 2017
*/

#include <iostream>
#include <string>

using namespace std;

int main (){
    string myName = "Amit Chanchal";
    cout<< "Name: " << myName<<endl;
    // string are part of STL and provide a lot of useful functions
    cout<< "length of the string: "<< myName.size() << endl;
    return 0;

    /*
        Operations on Strings
        ~~~~~~~~~~~~~~~~~~~~~~~~~~
        STRING CONCATENATION
        String can be joined together by using "+" operator
        string str1 = "hey";
        string str2 = "you";
        string str3 = str1 + " " +str2 ; // str3 will be now "hey you"

        STRING COMPARE
        Unlike 'C' where comparing string can be a hassel (one way is to use strcmp() from string.h header). C++ makes 
        this quite friendly with comparisons carried like any other comparisons, by using "==" operator.
        if (password == "fevkjhf") {
            .....
        }

        
        
        String Length and Accessing Individual Elements

        To take the length of a string, you can use either the length or size function, 
        which are members of the string class, and which return the number of characters in a string:
        string my_string1 = "ten chars.";
        int len = my_string1.length(); // or .size();

        Strings, like C strings (char*s), can be indexed numerically. For instance, you could iterate over 
        all of the characters in a string indexing them by number, as though the the string were an array. 

        Note that the use of the length() or size() function is important here because C++ strings are not guaranteed to be 
        null-terminated (by a '\0'). (In fact, you should be able to store bytes with a value of 0 inside of a C++ string 
        with no adverse effects. In a C string, this would terminate the string!)

        int i;
        for(i = 0; i < my_string.length(); i++)
        {
            cout<<my_string[i];
        }
        On the other hand, strings are actually sequences, just like any other STL container, so you can use iterators to 
        iterate over the contents of a string.

        string::iterator my_iter;
        for(my_iter = my_string.begin(); my_iter != my_string.end(); my_iter++)
        {
            cout<<*my_iter;
        }
        Note that my_string.end() is beyond the end of the string, so we don't want to print it, 
        whereas my_string.begin() is at the first character of the string. Incidentally, C++ string iterators are easily 
        invalidated by operations that change the string, so be wary of using them after calling any string function that may 
        modify the string.



        Searching and Substrings
        The string class supports simple searching and substring retrieval using the functions find(), rfind(), and substr(). 
        The find member function takes a string and a position and begins searching the string from the given position for the 
        first occurence of the given string. It returns the position of the first occurence of the string, or a special value, string::npos, 
        that indicates that it did not find the substring. 

        This is what the find function prototype would look like. (Note that I've used ints here for clarity, but they would 
        actually be of the type "size_type", which is unsigned.)   // int find(string pattern, int position);


        string input;
        int i = 0;
        int cat_appearances = 0;

        getline(cin, input, '\n');

        for(i = input.find("cat", 0); i != string::npos; i = input.find("cat", i))
        {
            cat_appearances++;
            i++;  // Move past the last discovered instance to avoid finding same
                // string
        }
        cout<<cat_appearances;


        Modifying Strings via Splicing or Erasure

        It's also possible to modify C++ strings to either remove part of a string or add in new text. 
        The erase() function looks very similar to substr in its prootype; it takes a position and a character count and 
        removes that many characters starting from the given position. Note that position is zero-indexed, as usual.

        string my_removal = "remove aaa";
        my_removal.erase(7, 3); // erases aaa
        
        To delete an entire string, you could use
        str.erase(0, str.length());

        On the other hand, you can also splice one string into another. The member function insert takes a position and 
        a string and inserts that string starting at the given position:
        
        string my_string = "ade";
        my_string.insert(1, "bc");
        // my_string is now "abcde"
        cout<<my_string<<endl;



    
    */
}