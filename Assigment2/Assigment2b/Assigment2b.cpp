#include <iostream>
#include<string>
#include<sstream>
#include<cstring>
#include <cstdlib>

double  Calculator (const char* input){
    const int max_size = 100;
    double* stack = new double [max_size];
    int size = 0;

    char* simvol = strtok(const_cast<char*>(input)," ");
    while (simvol != nullptr) {
        if (std::strchr("0123456789", simvol[0])) {
         stack[size++] = std::stod(simvol);
        } else {

            double a = stack[--size];
            double b = stack[--size];

            if (strcmp(simvol, "+") == 0) {
                stack[size++] =  a + b;
            } else if (strcmp(simvol, "-") == 0) {
                stack[size++] = a - b;
            } else if (strcmp(simvol, "*") == 0) {
                stack[size++] = a * b;
            } else if (strcmp(simvol, "/") == 0) {
                stack[size++] = a / b;
            }
        }
        simvol = strtok(nullptr, " ");
    }
    double result = stack[--size];
    delete[] stack;
    return result;
}

int main() {
    std::string input;
    std::getline(std::cin, input);

    
    double result = Calculator(input.c_str());
    std::cout << result << std::endl;

    return 0;
}


