Description :
This project is a simple C++ program that demonstrates basic string manipulation techniques. It includes the function to append text to a string, replace characters within a string, compare strings, and find substrings. The project also a test to learn important programming concepts such as const correctness and encapsulation and why we use them i c++ to make our life easier. 

Installation
Before you start have this: 
A C++ compiler (e.g., g++, clang++)
Google Test framework for testing
I did this by CLoning Marcs reposotory. 


Example Output: 
Hi! What is your message?:
Printing things lol

Hello, World!Allihopa!

Getting the string

Hello, World!Allihopa!
Bye Bye

Hellolloloo
Printing things lol
Hello, World!
Added the append word to the buffer
Added the appendLine word to the buffer
Bye Bye

Bye Bye

Bye Bye
Is it alive?!
Bye Bye
1
0
Index: 1
Index: 7
Index: -1



Class Details
String Class
The String class provides various string manipulation functions and demonstrates concepts like const correctness and encapsulation.

Constructors:

String(int maxSize): Initializes a string with a maximum buffer size.
String(const char* text, int maxSize): Initializes a string with given text and a maximum buffer size.
String(const String& other): Copy constructor.
String(String&& other) noexcept: Move constructor.
Destructor:

~String(): Deallocates the buffer memory.

Member Functions:

void append(const char* text1): Appends text to the string.
void appendLine(const char* text2): Appends text followed by a newline to the string.
void Replace(char replace, char replacer): Replaces characters in the string.
void print(): Prints the string.
char* getString() const: Returns the string as a C-string.
int indexOf(const String& other) const: Finds the index of another string.
Operator Overloads:

<, >, <=, >=, ==, !=, =.

Const Correctness
The project demonstrates const correctness by using const in function signatures to ensure that functions do not modify the state of objects when they are not supposed to. This helps in maintaining the predictability of the code.

Encapsulation
The project uses encapsulation by keeping the internal data of the String class private and providing public member functions to manipulate the data. This ensures that the internal state of an object is protected from unintended or harmful modifications.

Testing
The project includes a set of Google Test cases to verify the functionality of the String class.

