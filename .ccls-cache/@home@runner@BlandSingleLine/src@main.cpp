#include <main.h>
#include <util.h>
#include <iostream>
#include <cmath>
    
int main() {
    double a;
    double b;
    double c;

    std::cout << "Enter side a: ";
    std::cin >> a;

    std::cout << "Enter side b: ";
    std::cin >> b;

    std::cout << "Enter side c: ";
    std::cin >> c;

    c = sqrt(pow(a,2) + pow(b,2));

    std::cout << "The hypotenuse is: " << c << std::endl;

    return 0;
    
    
};


