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

## Option2
> g++ -o myprog myprog.cpp 

If you want to give a specific name to your compiled file you can use "-o" flag and provide the desired name. Now instead of a.out you can use the name that you have specified. In the above case 
> ./myprog or myprog

## Other flags and options
>*-x language*
Specify explicitly the language for the following input files (rather than letting the compiler choose a default based on the file name suffix). This option applies to all following input files until the next -x option. 

>*-c*
Compile or assemble the source files, but do not link. The linking stage simply is not done. The ultimate output is in the form of an object file for each source file.

>*-S*
Stop after the stage of compilation proper; do not assemble. The output is in the form of an assembler code file for each non-assembler input file specified.

>*-E*
Stop after the preprocessing stage; do not run the compiler proper. The output is in the form of preprocessed source code, which is sent to the standard output.

>*-o file*
Place output in file file. This applies to whatever sort of output is being produced, whether it be an executable file, an object file, an assembler file or preprocessed C code.

>*-v*
Print (on standard error output) the commands executed to run the stages of compilation. Also print the version number of the compiler driver program and of the preprocessor and the compiler proper.

>*--help*
Print (on the standard output) a description of the command-line options understood by gcc. 

>*-Werror*
Make all warnings into errors.

>*-Wall*
This enables all the warnings about constructions that some users consider questionable, and that are easy to avoid (or modify to prevent the warning), even in conjunction with macros. 
