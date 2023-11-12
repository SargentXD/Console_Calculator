#include <main.h>
#include <util.h>
#include <iostream>
#include <cmath>
    
int main() {

    char op;
    double num1, num2, result;

    std::cout << "------------------------------------";
    std::cout << "Enter an operator (+, -, *, /, ^,)";
    std::cin >> op;

    std::cout << "Enter 1st operand: ";
    std::cin >> num1;
    
    std::cout << "Enter 2nd operand: ";
    std::cin >> num2;

    switch (op) {
        case '+':
        result = num1 + num2;
        std::cout << "Result = " << result << '\n';
        break;
        
        case '-':
        result = num1 - num2;
        std::cout << "Result = " << result << '\n';
        break;
        
        case '*':
        result = num1 * num2;
        std::cout << "Result = " << result << '\n';
        break;
        
        case '/':
        result = num1 / num2;
        std::cout << "Result = " << result << '\n';
        break;
        
        default:
        std::cout << "Wasent a valid response" << '\n';
        break;
        
    }
    

    std::cout << "------------------------------------";
    

    return 0;
    
    
};


