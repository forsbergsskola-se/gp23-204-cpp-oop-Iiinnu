#include <iostream>
#include "String.h"
#include <iostream>


using namespace std; // Avoid in larger projects, use specific namespaces instead

int main()
{
    // Prompt the user for input
    cout << "Welcome stranger! What is your message for this world: ...\n";

    // Create a String object with initial content "\n\nHello" and a buffer size of 100
    String helloWorld{ "\n\nHello", 100 };
    helloWorld.appendLine(", World!"); // Append a line to the string
    helloWorld.append("Alli");         // Append text to the string
    helloWorld.appendLine("hopa!\n\n");// Append a line to the string
    helloWorld.print();                // Print the final string

    // Get and display the string content
    cout << "Getting the string" << helloWorld.getString();

    // Create another String object and replace characters
    String replaceString("\n\nHellolloloo\n\n", 100);
    replaceString.Replace('l', 'T');   // Replace 'l' with 'T'
    replaceString.print();             // Print the modified string

    // Comparison of String objects
    String a{ "Hello", 100 };
    String b{ "Hello", 100 };
    String c{ "World", 100 };

    printf("%d\n", a == b); // Output 1 (true) if strings a and b are equal
    printf("%d\n", c == b); // Output 0 (false) if strings c and b are not equal

    // Finding substrings within a string
    String strZ{ "Hello, World!", 100 };
    String strTest1{ "ello", 100 };
    String strTest2{ "World", 100 };
    String strTest3{ "Marc", 100 };

    printf("Index: %d\n", strZ.indexOf(strTest1)); // Output the starting index of "ello" in strZ
    printf("Index: %d\n", strZ.indexOf(strTest2)); // Output the starting index of "World" in strZ
    printf("Index: %d\n", strZ.indexOf(strTest3)); // Output -1 if "Marc" is not found in strZ

    return 0;
}


using namespace std; // Avoid in larger projects, use specific namespaces instead

int main()
{
    // Prompt the user for input
    cout << "Hello! What is your message ?: ...\n";

    // Create a String object with initial content "\n\nHello" and a buffer size of 100
    String helloWorld{ "\n\nHello", 100 };
    helloWorld.appendLine(", World!"); // Append a line to the string
    helloWorld.append("Alli");         // Append text to the string
    helloWorld.appendLine("hopa!\n\n");// Append a line to the string
    helloWorld.print();                // Print the final string

    // Get and display the string content
    cout << "Getting the string" << helloWorld.getString();

    // Create another String object and replace characters
    String replaceString("\n\nHellolloloo\n\n", 100);
    replaceString.Replace('l', 'T');   // Replace 'l' with 'T'
    replaceString.print();             // Print the modified string

    // Comparison of String objects
    String a{ "Hello", 100 };
    String b{ "Hello", 100 };
    String c{ "World", 100 };

    printf("%d\n", a == b); // Output 1 (true) if strings a and b are equal
    printf("%d\n", c == b); // Output 0 (false) if strings c and b are not equal

    // Finding substrings within a string
    String strZ{ "Hello, World!", 100 };
    String strTest1{ "ello", 100 };
    String strTest2{ "World", 100 };
    String strTest3{ "Marc", 100 };

    printf("Index: %d\n", strZ.indexOf(strTest1)); // Output the starting index of "ello" in strZ
    printf("Index: %d\n", strZ.indexOf(strTest2)); // Output the starting index of "World" in strZ
    printf("Index: %d\n", strZ.indexOf(strTest3)); // Output -1 if "Marc" is not found in strZ

    return 0;
}
