#pragma once
#include <iostream>


using namespace std;

class myString
{
    int length = 0;
    const int maxSize;
    char* buffer;

public:
    myString(const int maxSize);

    myString(const char* text, const int maxSize);
    ~myString();
    
    void append(const char* text1);
    void appendLine(const char* text2);
    void Replace(char replace, char replacer);
    void print();
    char* getString();
    bool operator== (const myString& other) const;
    int indexOf(const myString& other) const;
                 
   };
