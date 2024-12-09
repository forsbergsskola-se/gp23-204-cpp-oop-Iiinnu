#pragma once
#include <iostream>


using namespace std;

class myString
{
public:
int length = 0;
const int maxSize;
char* buffer;

    myString(const int maxSize);

    myString(const char* text, const int maxSize);
   
    
    void Append(const char* text);
    void AppendLine(const char* text);
    void Replace(char replace, char replacer);
    void Print()const;
    char* GetString();
    bool operator== (const myString& other) const;
    int IndexOf(const myString& other) const;
    ~myString();
   };
