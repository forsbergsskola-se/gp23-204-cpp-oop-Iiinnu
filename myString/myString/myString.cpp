#include "myString.hpp"
#include <iostream>
#include <cstring>

// Destructor
myString::~myString() {
    delete[] buffer;
}

// Append function
void myString::Append(const char* text) {
    int textLength = 0;
    
    if (length + textLength < maxSize)
        
    {
        std::strncpy(buffer + length, text, textLength);
        length += textLength;
        buffer[length] = '\0';  // Ensure null
    } else {
        cout << "Added the append word to the buffer\n";
    }
}

// Append line function
void myString::AppendLine(const char* text) {
    Append(text);
    if (length + 1 < maxSize) {
        buffer[length++] = '\n';
        buffer[length] = '\0';
    } else {
        cout << "Not enough space to append newline\n";
    }
}

// Replace function
void myString::Replace(char replace, char replacer) {
    for (int m = 0; buffer[m] != '\0'; m++) {
        if (buffer[m] == replace) {
            buffer[m] = replacer;
        }
    }
}


void myString::Print() const {
    cout << buffer << endl;
}


char* myString::GetString(){
    return buffer;
}


bool myString::operator==(const myString& other) const {
    return std::strcmp(buffer, other.buffer) == 0;
}


int myString:: IndexOf(const myString& other) const{
    
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

// This is the Main function, should it be on top?
int main() {
    myString helloWorld("Hello", 100);
    helloWorld.Append(", World\n");
    helloWorld.Append("Alli");
    helloWorld.Append("hopa!");

    helloWorld.Print();
}
