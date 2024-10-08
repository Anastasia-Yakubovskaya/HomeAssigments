/*Yakubovskaya Anastasya st130155@student.spbu.ru Zadacha2*/
#include "header.h"
#include <iostream>
#include <string>
#include <sstream>
#include <cstring>
#include <cstdlib>

double Calculator(const char* input) {
    const int max_size = 100;
    double* stack = new double[max_size];
    int size = 0;

    char* simvol = strtok(const_cast<char*>(input), " ");
    while (simvol != nullptr) {
        if (std::strchr("0123456789", simvol[0])) {
            stack[size++] = std::stod(simvol);
        } else {
            double a = stack[--size];
            double b = stack[--size];

            if (strcmp(simvol, "+") == 0) {
                stack[size++] = a + b;
            } else if (strcmp(simvol, "-") == 0) {
                stack[size++] = b - a;
            } else if (strcmp(simvol, "*") == 0) {
                stack[size++] = a * b;
            } else if (strcmp(simvol, "/") == 0) {
                stack[size++] = b/a;
            }
        }
        simvol = strtok(nullptr, " ");
    }
    double result = stack[--size];
    delete[] stack;
    return result;
}
