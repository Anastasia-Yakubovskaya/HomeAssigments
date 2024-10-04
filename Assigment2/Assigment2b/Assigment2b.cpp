/*Yakubovskaya Anastasya st130155@student.spbu.ru Zadacha2b*/
#include <iostream>
#include <stack>
#include<string>
extern string name;

int main() {
    std::string input;
    std::getline(std::cin, input);

    
    double result = Calculator(input);
    std::cout << result << std::endl;

    return 0;
}
