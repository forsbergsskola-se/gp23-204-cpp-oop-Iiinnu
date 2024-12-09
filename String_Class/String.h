#pragma once
#include <iostream>

using namespace std; // A bad practice but it makes coding quicker 

// Class definition for String
class String
{
public:
    int length = 0;  // Current length of the string
    int maxSize;     // Maximum size of the string buffer
    char* buffer;    // Pointer to the character buffer

    // Constructor initializing with maxSize
    String(int maxSize) : maxSize(maxSize)
    {
        buffer = new char[maxSize];  // Allocate memory for buffer
        buffer[length] = '\0';       // Null-terminate the buffer
    }

    // Constructor initializing with a C-string and maxSize
    String(const char* text, int maxSize) : maxSize(maxSize)
    {
        cout << "Is it alive?!\n";
        buffer = new char[maxSize];  // Allocate memory for buffer
        while (text[length] != '\0' && length < maxSize)
        {
            buffer[length] = text[length]; // Copy text to buffer
            length++;
        }
    }

    // Copy constructor
    String(const String& other) : maxSize(other.maxSize)
    {
        buffer = new char[maxSize]; // Allocate memory for buffer
        for (int i = 0; i < length; ++i)
        {
            buffer[i] = other.buffer[i]; // Copy buffer content
        }
        buffer[length] = '\0'; // Null-terminate the buffer
    }

    // Move constructor
    String(String&& other) noexcept : maxSize(other.maxSize)
    {
        other.buffer = nullptr;  // Nullify the source buffer
        other.length = 0;
        other.maxSize = 0;
    }

    // Destructor
    ~String() {
        delete[] buffer; // Deallocate buffer memory
        cout << "\nBye Bye\n";
    }

    // Append function to add text at the end of the buffer
    void append(const char* text1)
    {
        int textLength = 0;
        while (text1[textLength] != '\0')
        {
            textLength++;
        }
        if (length + textLength < maxSize)
        {
            for (int i = 0; i < textLength; i++)
            {
                buffer[length] = text1[i]; // Append text to buffer
                length++;
            }
            buffer[length] = '\0'; // Null-terminate the buffer
        }
        cout << "Added the append word to the buffer\n";
    }

    // Append function to add text with a newline at the end of the buffer
    void appendLine(const char* text2)
    {
        int textLength = 0;
        while (text2[textLength] != '\0')
        {
            textLength++;
        }
        if (length + textLength < maxSize)
        {
            for (int i = 0; i < textLength; i++)
            {
                buffer[length] = text2[i]; // Append text to buffer
                length++;
            }
            buffer[length] = '\n'; // Append newline character
            length++;
            buffer[length] = '\0'; // Null-terminate the buffer
        }
        cout << "Added the appendLine word to the buffer\n";
    }

    // Replace function to replace characters in the buffer
    void Replace(char replace, char replacer)
    {
        int m = 0;
        while (buffer[m] != '\0')
        {
            if (buffer[m] == replace)
            {
                buffer[m] = replacer; // Replace character
            }
            m++;
            if (m >= length)
            {
                buffer[m] = '\0'; // Null-terminate the buffer
            }
        }
    }

    // Print function to display the buffer
    void print()
    {
        cout << "Printing things lol\n";
        cout << buffer; // Print buffer content
    }

    // Get the buffer as a C-string
    char* getString()
    {
        return buffer;
    }

    // Less than operator overload
    bool operator <(const String& other)
    {
        return length < other.length; // Compare lengths
    }

    // Greater than operator overload
    bool operator >(const String& other)
    {
        return length > other.length; // Compare lengths
    }

    // Less than or equal operator overload
    bool operator <=(const String& other)
    {
        return length <= other.length; // Compare lengths
    }

    // Greater than or equal operator overload
    bool operator >=(const String& other)
    {
        return length >= other.length; // Compare lengths
    }

    // Equality operator overload
    bool operator==(const String& other) const
    {
        int i = 0;
        while (buffer[i] != '\0' && other.buffer[i] != '\0' && i < length)
        {
            if (buffer[i] != other.buffer[i]) {
                return false; // Return false if characters differ
            }
            i++;
        }
        return buffer[i] == other.buffer[i]; // Check final character
    }

    // Inequality operator overload
    bool operator!=(const String& other) const
    {
        int i = 0;
        while (buffer[i] != '\0' && other.buffer[i] != '\0' && i < length)
        {
            if (buffer[i] != other.buffer[i]) {
                return true; // Return true if characters differ
            }
            i++;
        }
        return buffer[i] != other.buffer[i]; // Check final character
    }

    // Assignment operator overload
    String& operator=(const String& other)
    {
        if (this != &other)
        {
            delete[] buffer; // Deallocate current buffer
            maxSize = other.maxSize;
            length = other.length;
            buffer = new char[maxSize]; // Allocate new buffer

            for (int i = 0; i <= length; ++i)
            {
                buffer[i] = other.buffer[i]; // Copy buffer content
            }
        }
        return *this;
    }

    // Function to find the index of another string
    int indexOf(const String& other) const
    {
        int i = 0;
        int j = 0;
        while (buffer[i] != '\0' && other.buffer[j] != '\0')
        {
            if (buffer[i] == other.buffer[j])
            {
                j++;
                return i; // Return the index of the match
            }
            i++;
        }
        return -1; // Return -1 if not found
    }
};

