/*
  @file: basic/prg1.cpp
  @subject: Basic first program
  @author: amit chanchal <amit.chanchal@hotmail.com>
  @date: April 2017
*/

// Including the library as header file, this is available to you through system
#include<iostream>

/*
  A namespace is designed to overcome the difficulty of differentiating varibale names
  and is used as additional information to differentiate similar functions,
  classes, variables etc. with the same name available in different libraries.
*/
using namespace std;

/*
  Main function is your entry point for your program. You should go ahead and try writing a program that doesn't have main().
  You are likely to see the error below. It basically means that there is no main function in the file or in any files in the header
  which linker can compile along with this one.

  <<<<<<
      Undefined symbols for architecture x86_64:
      "_main", referenced from:
        implicit entry/start for main executable
      ld: symbol(s) not found for architecture x86_64
      clang: error: linker command failed
  >>>>>>

  We will see anatomy of functions later.
*/
int main(){
    /*
      cout displayes the character/results to the screen/console.
      if we didnt use namespace we would have to change below expression to
      std::cout<< ....
      I guess, it is fairly logical to not want to type extra characters everytime
    */
    cout <<"hey, this works!\n";
    // Effectively "line1 \n line2"
    cout <<"line1"<<endl<<"line2";
}

// also before its too late 
// i am a single line comment which the compiler is going to ignore


/*
    I am a multiline comment,
    here is my intent,
    I am going to talk a lot,
    i am of that sort,
    be prepared, it not a accident!
*/
