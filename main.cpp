//
//  main.cpp
//  Learning C++
//
//  Created by Alan Lee on 10/21/20.
//

#include <iostream>
#include <string>

int main() {
    // Basic output
    std::cout << 1;
    std::cout << "\n";
    std::cout << "Second line\n";
    
    // Basic input and output
    int number = 5;
    std::cout << "Enter a number: ";
    // std::cin >> number;
    std::cout << "Five times your number is: " << number * 5 << "\n";
    
    // Variable types
    bool boolean = true;
    char character = 'c';
    float single_precision = 3.14;
    double double_precision = 2.718;
    
    std::cout << single_precision * double_precision << "\n";
    
    if(boolean) {
        std::cout << character << "\n";
    } else {
        std::cout << "False" << "\n";
    }
    
    std::string result = (boolean) ? "True" : "False";
    std::cout << result << "\n";
    
    return 0;
}
