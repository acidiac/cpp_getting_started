There are numerous copilers for c and c++, such as GCC, CLANG, Intel, HP, TurboC, BORLAND C++ so on. For all the codes in the section I have used GCC version 4.2.1 on mac. Although, it's not going to be a big deal for now, you can find out your gcc version version using:
> gcc --version

# Compiling with GCC

Let's say we had a cpp program called myprog.cpp. Using GCC we can compile it using command line or terminal using following command.

## Option1
 >g++ myprog.cpp 

This is the simplest way you can compile your c++ programs. The compiled version of the file is stored as a.out by default in the same folder. You can run this by either just typing 
>a.out
or 
>./a.out
* g++ : is the compiler we are using
* myprog.cpp: is the name of the file

##Option2
> g++ -o myprog myprog.cpp 

If you want to give a specific name to your compiled file you can use "-o" flag and provide the desired name. Now instead of a.out you can use the name that you have specified. In the above case 
> ./myprog or myprog


