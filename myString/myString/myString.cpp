#include "myString.hpp"
#include <iostream>
#include "cstring"


    myString::~myString()

    {
    delete[] buffer;
    }



    void myString:: append(const char* text1)
    {
        int textLength = std::strlen(text);
    
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

void myString:: appendLine(const char* text2)
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

void myString:: Replace(char replace, char replacer)
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

void myString:: print()
{
    cout << "Printing stuff\n";
    cout << buffer;
}

char* getString()
{
    return buffer;
}


bool myString:: operator== (const myString& other) const
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

int myString:: indexOf(const myString& other) const
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

    int main() {
        myString helloWorld("Hello", 100);
        helloWorld.append(", World\n");
        helloWorld.append("Alli");
        helloWorld.append("hopa!");
        
        helloWorld.print();
    

};
