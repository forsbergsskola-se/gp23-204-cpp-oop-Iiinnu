#pragma once

#include "pch.h"
#include <gtest/gtest.h>
#include <iostream>
#include "../String_Class/String.h"

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


// Test case for the append function of the String class
TEST(StringTest, AppendFunctionTest)
{
    // Create a String object with initial content "Hello" and a buffer size of 100
    String str1("Hello", 100);
    // Append " World!" to the string
    str1.append(" World!");
    // Check if the resulting string is "Hello World!"
    EXPECT_STREQ(str1.getString(), "Hello World!");
}

// Test case for the appendLine function of the String class
TEST(StringTest, AppendLineFunctionTest)
{
    // Create a String object with initial content "Alli" and a buffer size of 100
    String str2("Alli", 100);
    // Append "hopa!" and a newline to the string
    str2.appendLine("hopa!");
    // Check if the resulting string is "Allihopa!\n"
    EXPECT_STREQ(str2.getString(), "Allihopa!\n");
}

// Test case for the replace function of the String class
TEST(StringTest, ReplaceFunctionTest)
{
    // Create a String object with initial content "Hello World! Allihopa!" and a buffer size of 100
    String str3("Hello World! Allihopa!", 100);
    // Replace all occurrences of 'l' with 'T'
    str3.Replace('l', 'T');
    // Check if the resulting string is "HeTTo WorTd! ATTihopa!"
    EXPECT_STREQ(str3.getString(), "HeTTo WorTd! ATTihopa!");
}

// Test case for the getString function of the String class
TEST(String, GetString) {
    // Create a String object with initial content "Hello" and a buffer size of 100
    String helloWorld{ "Hello", 100 };
    // Append ", World!" to the string
    helloWorld.append(", World!");
    // Append "Alli" and a newline to the string
    helloWorld.appendLine("Alli");

    // Get the resulting C-style string
    const char* str = helloWorld.getString();

    // Check if the resulting string is "Hello, World!Alli\n"
    EXPECT_STREQ(str, "Hello, World!Alli\n");
}

// Test case for the comparison operators of the String class
TEST(String, ComparisonOperator)
{
    // Create three String objects with different initial contents and the same buffer size of 100
    String a{ "Hello", 100 };
    String b{ "Hello", 100 };
    String c{ "World", 100 };

    // Check if a is equal to b
    EXPECT_TRUE(a == b);
    // Check if c is not equal to b
    EXPECT_TRUE(c != b);
    // Check if c is less than or equal to b
    EXPECT_TRUE(c <= b);
    // Check if c is greater than or equal to b
    EXPECT_TRUE(c >= b);
    // Check if b is not equal to c
    EXPECT_FALSE(b == c);
}

// Test case for the indexOf function of the String class
TEST(String, IndexOfSubstring) {
    // Create a String object with initial content "Hello, World!" and a buffer size of 100
    String strZ{ "Hello, World!", 100 };
    // Create three String objects with different initial contents and the same buffer size of 100
    String strTest1{ "ello", 100 };
    String strTest2{ "World", 100 };
    String strTest3{ "Marc", 100 };

    // Check if the index of "ello" in "Hello, World!" is 1
    EXPECT_EQ(strZ.indexOf(strTest1), 1);
    // Check if the index of "World" in "Hello, World!" is 7
    EXPECT_EQ(strZ.indexOf(strTest2), 7);
    // Check if the index of "Marc" in "Hello, World!" is -1 (not found)
    EXPECT_EQ(strZ.indexOf(strTest3), -1);
}


