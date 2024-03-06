#include "myString.hpp"
#include "string.h"
#include <iostream>

int main() {
    myString helloWorld("Hello", 100);
    helloWorld.append(", World\n");
    helloWorld.append("Alli");
    helloWorld.append("hopa!");

    helloWorld.print();
}
