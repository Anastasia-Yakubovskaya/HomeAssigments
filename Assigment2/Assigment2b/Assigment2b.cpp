/*Yakubovskaya Anastasya st130155@student.spbu.ru Zadacha2*/
#include <iostream>
#include <string>
#include "header.h"

int main() {
    std::string input;
    std::getline(std::cin, input);

    double result = Calculator(input.c_str());
    std::cout << result << std::endl;

    return 0;
}
