#include "header.h"
#include <iostream>

int main() {
    char* buffer = nullptr;
    std::uintmax_t fileSize = 0;


    const std::string inputFile = "Assigment2.txt";
    const std::string outputFile = "Nov.txt";


    readFile(inputFile, buffer, fileSize);

    reverseBuffer(buffer, fileSize);       
    writeFile(outputFile, buffer, fileSize); 

    delete[] buffer;

    return 0;
}
