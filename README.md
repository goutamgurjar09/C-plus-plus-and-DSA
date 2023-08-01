# C-Programming-Notes
1.what is c++?
    
    C++ is a high-level, general-purpose programming language that was developed as an extension of the C programming language. It was created by Bjarne Stroustrup 
    in the early 1980s at Bell Labs as an enhancement to C to provide object-oriented programming features. 
    C++ is a versatile language that supports both procedural and object-oriented programming paradigms, making it suitable for a wide range of applications, from 
    system programming to building desktop applications, games, and more.

# C++ Features:-

  ->C++ is a high-level, general-purpose programming language designed for system and application programming. It was developed by Bjarne Stroustrup at Bell Labs in 
    1980 as an extension of the C programming language. C++ is an object-oriented, multi-paradigm language that supports procedural, functional, and generic 
    programming styles.

  ->C++ is a simple language because it provides a structured approach (to break the problem into parts), a rich set of library functions, data types, etc.
 
  ->C++ is a portable language and programs made in it can be run on different machines.
  
  ->C++ includes both low-level programming and high-level language so it is known as a mid-level and intermediate programming language. It is used to develop system 
    applications such as kernel, driver, etc.
  
  ->C++ is known as hybrid language because C++ supports both procedural and object oriented programming paradigms.
 
  ->C++ provides a lot of inbuilt functions that make the development fast. Following are the libraries used in C++ programming are:
    <iostream>,<cmath>,<cstdlib>,<fstream> 
  
  ->C++ provides the feature of pointers. We can use pointers for memory, structures, functions, array, etc. We can directly interact with the memory by using the 
    pointers.
  
  ->In C++, we can call the function within the function. It provides code reusability for every function.
  
  ->Object-Oriented Programming: C++ supports object-oriented programming, allowing developers to create classes and objects and to define methods and properties for 
    these objects.
    In C++, object-oriented concepts like data hiding, encapsulation, and data abstraction can easily be implemented using keyword class, private, public, and 
    protected access specifiers. Object-oriented makes development and maintenance easier.
   
   ->C++ is a compiler-based programming language, which means no C++ program can be executed without compilation.

   ->Templates: C++ templates allow developers to write generic code that can work with any data type, making it easier to write reusable and flexible code.

   ->Standard Template Library (STL): The STL provides a wide range of containers and algorithms for working with data, making it easier to write efficient and 
     effective code.

   ->Exception Handling: C++ provides robust exception handling capabilities, making it easier to write code that can handle errors and unexpected situations.

   ->C++ has a large, active community of developers and users, and a wealth of resources and tools available for learning and using the language.

   ->Platform Independent: C++ is a platform-independent language, meaning that code written in C++ can be compiled and run on a wide range of platforms, from desktop 
     computers to mobile devices.

   ->Performance: C++ is a compiled language, which means that its code is compiled into machine-readable code, making it one of the fastest programming languages.
   
# First program c++:-
 * Writing your program in a text editor and saving it with the correct extension(.CPP , .C,  .CP).
 * Compiling your program using a compiler or online IDE.
 * Understanding the basic terminologies.
    #include <iostream>
    
    int main() {
    	std::cout << "Hello, World!" << std::endl;
    	return 0;
    }

# Difference between C and C++ :-

                   C	                                                                                     
1)	C follows the procedural style programming.      	               
2)	Data is less secured in C.	                                       
3)	C follows the top-down approach.	                               
4)	C does not support function overloading.	                        
5)	In C, you can't use functions in structure.	                        
6)	C does not support reference variables.	                              
7)	In C, scanf() and printf() are mainly used for input/output.	       
8)	Operator overloading is not possible in C.                            
9)	C programs are divided into procedures and modules	               
10)	C does not provide the feature of namespace.	                       
11)	Exception handling is not easy in C.It has to perform using other functions.	
13)	C does not support the inheritance.                              	

               C++
1)  C++ is multi-paradigm. It supports both procedural and object oriented.
2)  In C++, you can use modifiers for class members to make it inaccessible for outside users.
3)  C++ follows the bottom-up approach.
4)  C++ supports function overloading.
5)  In C++, you can use functions in structure.
6)  C++ supports reference variables.
7)  C++ mainly uses stream cin and cout to perform input and output operations.
8)  in C++ Operator overloading is possible .
9)  C++ programs are divided into functions and classes.
10) C++ supports the feature of namespace.
11) C++ provides exception handling using Try and Catch block.
12) C++ supports inheritance.


# C++ Basic Input/Output ?
C++ I/O operation is using the stream concept. Stream is the sequence of bytes or flow of data. It makes the performance fast.

If bytes flow from main memory to device like printer, display screen, or a network connection, etc, this is called as output operation.

If bytes flow from device like printer, display screen, or a network connection, etc to main memory, this is called as input operation.

# Standard output stream (cout) :-
The cout is a predefined object of ostream class. It is connected with the standard output device, which is usually a display screen. The cout is used in conjunction with stream insertion operator (<<) to display the output on a console

Let's see the simple example of standard output stream (cout):
#include <iostream>  
using namespace std;  
int main( ) {  
   char ary[] = "Welcome to C++ tutorial";  
   cout << "Value of ary is: " << ary << endl;  
}  

# Standard input stream (cin) :-
The cin is a predefined object of istream class. It is connected with the standard input device, which is usually a keyboard. The cin is used in conjunction with stream extraction operator (>>) to read the input from a console.

Let's see the simple example of standard input stream (cin):
#include <iostream>  
using namespace std;  
int main( ) {  
  int age;  
   cout << "Enter your age: ";  
   cin >> age;  
   cout << "Your age is: " << age << endl;  
}  

# Standard end line (endl) 
The endl is a predefined object of ostream class. It is used to insert a new line characters and flushes the stream.

Let's see the simple example of standard end line (endl):
#include <iostream>  
using namespace std;  
int main( ) {  
  cout << "C++ Tutorial";     
  cout << " Javatpoint"<<endl;   
  cout << "End of line"<<endl;   
}   

# what is #include<iostream.h>/<iostream>?

#include<iostream> includes the standard input output library functions. It provides cin and cout methods for reading from input and writing to output respectively.

#include <iostream> is a preprocessor directive in C++ that includes the contents of the standard I/O stream library, iostream, into your C++ program. The iostream library provides input and output stream functionalities in C++.

The iostream library allows you to perform input (reading data) and output (writing data) operations in the C++ program using the standard input (std::cin) and output (std::cout) streams. It provides classes like std::istream and std::ostream that represent input and output streams, respectively.

# what is using namespace std; ?

 using namespace std; is a C++ directive that allows you to use all the names from the std (standard) namespace without explicitly specifying the namespace.
 By adding using namespace std; at the beginning of your code, you are essentially telling the compiler that you want to use all the names from the std namespace 
 directly in your code without explicitly specifying std:: before each name.
 The std::cout is used to identify the standard character output device which is usually the desktop screen;
 #include <iostream>
// Using the directive "using namespace std;"
using namespace std;
int main() {
    int number;
    cout << "Enter a number: "; // Instead of std::cout, we can use cout directly
    cin >> number;              // Instead of std::cin, we can use cin directly
    cout << "You entered: " << number << endl; // Instead of std::endl, we can use endl directly
    return 0;
}

#include <iostream>
// Using specific names from the std namespace
using std::cout;
using std::cin;
using std::endl;
int main() {
    int number;
    cout << "Enter a number: "; // Now, we can use cout directly
    cin >> number;              // And cin directly
    cout << "You entered: " << number << endl; // And endl directly
    return 0;
}


# Comment in C++ :-

 -> Single Line Comment:-
// C++ program to display “Hello World”
This line is a comment line. A comment is used to display additional information about the program. A comment does not contain any programming logic. When a comment is encountered by a compiler, the compiler simply skips that line of code.

# What is int main()?

->int main() is the entry point for a C++ program. When you run a C++ program, the execution starts from the main function. It is the first function that gets called when the program is executed, and it is mandatory for every C++ program to have a main function.
The main function is defined with the return type int, which indicates that the function returns an integer value.
Execution of every C++ program begins with the main() function.

->void main() The main() function is the entry point of every program in C++ language. The void keyword specifies that it returns no value.

# return 0

This is also a statement. This statement is used to return a value from a function and indicates the finishing of a function. This statement is basically used in functions to return the results of the operations performed by a function. 

# Important Points :-

->Always include the necessary header files for the smooth execution of functions. For example, <iostream> must be included to use std::cin and std::cout.
->The execution of code begins from the main() function.
->It is a good practice to use Indentation and comments in programs for easy understanding.
->cout is used to print statements and cin is used to take inputs.
