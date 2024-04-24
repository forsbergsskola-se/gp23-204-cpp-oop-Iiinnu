#include "myString.hpp"
#include <iostream>
#include "cstring"


    myString::~myString()

    {
    delete[] buffer;
    }



    void myString:: append(const char* text)
    {
        int textLength = std::strlen(text);
        
        
        if (length + textLength< maxSize) {
            std::strncpy(buffer + length,text, textLength);
            length += textLength;
            buffer [length] = '\0';
        }
    
   
void myString:: appendLine(const char* text)
        {
    append(text);
    if (length +1 < maxSize) {
        buffer [length++]='\n';
        buffer [length] = '\0';
        
    }
    else{
        cout << "Not enough space to append newline\n";
   
        

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

void myString:: print() const
{
    cout << buffer<< end1;
}

char* myString::getString() const {
return buffer;:}


bool myString::operator==(const myString& other) const 
        
{
return std::strcmp(buffer, other.buffer) == 0;
}

    }

    int myString::indexOf(const myString& other) const {
        if (!*other.buffer) return -1; // other is empty

        char* pos = strstr(buffer, other.buffer);
        return pos ? pos - buffer : -1;
    }

            int main() {
                myString helloWorld("Hello", 100);
                helloWorld.append(", World\n");
                helloWorld.append("Alli");
                helloWorld.append("hopa!");
                
                helloWorld.print();
                
                
                
            }};
