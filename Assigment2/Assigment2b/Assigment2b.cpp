#include <iostream>
#include<stack>
#include<string>
#include<sstream>
#include<cstring>


double  Calculator (const char* input){
    std::stack<double> stack;
    char* simvol = strtok(const_cast<char*>(input)," ");
    while (simvol != nullptr) {
        if (std::strchr("0123456789", simvol[0])) {
         stack.push(std::stod(simvol));
        } else {

            double a = stack.top(); stack.pop();
            double b = stack.top(); stack.pop();

            if (strcmp(simvol, "+") == 0) {
                stack.push(a + b);
            } else if (strcmp(simvol, "-") == 0) {
                stack.push(a - b);
            } else if (strcmp(simvol, "*") == 0) {
                stack.push(a * b);
            } else if (strcmp(simvol, "/") == 0) {
                stack.push(a / b);
            }
        }
        simvol = strtok(nullptr, " ");
    }
    return  stack.top();
}

int main() {
    std::string input;
    std::getline(std::cin, input);

    
    double result = Calculator(input.c_str());
    std::cout << result << std::endl;

    return 0;
}


