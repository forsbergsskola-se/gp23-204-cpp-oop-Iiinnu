#pragma once
#include <iostream>

class myString {
    int length = 0;
    int maxSize;
    char* buffer;

public:
    explicit myString(int maxSize) : maxSize(maxSize) {
        buffer = new char[maxSize];
        buffer[length] = '\0';
    }

    myString(const char* text, int maxSize) : maxSize(maxSize) {
        buffer = new char[maxSize];
        while (text[length] != '\0' && length < maxSize) {
            buffer[length] = text[length];
            length++;
        }
        buffer[length] = '\0'; // Ensure null-termination
    }

    ~myString() {
        delete[] buffer;
    }

    void append(const char* text) {
        // Your existing append logic
    }

    void appendLine(const char* text) {
        // Your existing appendLine logic, corrected typo in your call
    }

    void Replace(char replace, char replacer) {
        // Your existing Replace logic
    }

    void print() {
        std::cout << buffer << std::endl; // Use endl to flush the output
    }

    // Other methods remain unchanged
};
