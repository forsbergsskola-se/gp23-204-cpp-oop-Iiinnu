#pragma once
#include <iostream>


using namespace std;

class myString
{
    int length = 0;
    int maxSize;
    char* buffer;

public:
    myString(int maxSize) :maxSize(maxSize)
    {
        buffer = new char[maxSize];
        buffer[length] = '\0';
        
    }
   

    myString(const char* text, int maxSize) : maxSize(maxSize)
    {
        cout << "Is it alive?!\n";
        buffer = new char[maxSize];
        while (text[length] != '\0' && length < maxSize)
        {
            buffer[length] = text[length];
            length++;
        }
    }

    ~myString() {
        delete[] buffer;
        cout << "\nBye Bye\n";
    }

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
                buffer[length] = text1[i];
                length++;
            }
            buffer[length] = '\0';
        }
        cout << "Added the append word to the buffer\n";
    }

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
                buffer[length] = text2[i];
                length++;
            }
            buffer[length] = '\n';
            length++;
            buffer[length] = '\0';
        }
        cout << "Added the appendLine word to the buffer\n";
    }

    void Replace(char replace, char replacer)
    {
        int m = 0;
        while (buffer[m] != '\0')
        {
            if (buffer[m] == replace)
            {
                buffer[m] = replacer;
            }
            m++;
            if (m >= length)
            {
                buffer[m] = '\0';
            }
        }
    }

    void print()
    {
        cout << "Printing stuff\n";
        cout << buffer;
    }

    char* getString()
    {
        return buffer;
    }


    bool operator== (const myString& other) const
    {
        int i = 0;
        while (buffer[i] != '\0' && other.buffer[i] != '\0')
        {
            if (buffer[i] != other.buffer[i])
            {
                return false;
            }
            i++;
        }
        return buffer[i] == other.buffer[i];
    }

    int indexOf(const myString& other) const
    {
        int i = 0;
        int j = 0;
        while (buffer[i] != '\0' && other.buffer[j] != '\0')
        {
            if (buffer[i] == other.buffer[j])
            {
                j++;
                return i;
            }
            i++;
        }
        return -1;
    }

};

