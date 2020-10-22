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
    
    // If expression (w/ shortened form)
    if(boolean) {
        std::cout << character << "\n";
    } else {
        std::cout << "False" << "\n";
    }
    
    std::string result = (boolean) ? "True" : "False";
    std::cout << result << "\n";
    
    // sizeof()
    int char_size = sizeof(character);
    int bool_size = sizeof(boolean);
    int int_size = sizeof(number);
    int float_size = sizeof(single_precision);
    int double_size = sizeof(double_precision);
    
    std::cout << "Char size: " << char_size;
    std::cout << "\nBool size: " << bool_size;
    std::cout << "\nInt size: " << int_size;
    std::cout << "\nFloat size: " << float_size;
    std::cout << "\nDouble size: " << double_size << "\n";
    
    // Loops
    for(int x=10; x<20; x++) {
        std::cout << x << " ";
        if(x==19) {
            std::cout << "\n";
        }
    } // Prints 10-19
    
    do {
        number++;
        std::cout << number << " ";
        if(number==10) {
            std::cout << "\n";
        }
    } while(number<10); // Prints 6-10
        
    
    return 0;
}
