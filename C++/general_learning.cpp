//
//  general_learning.cpp
//  C++
//
//  Created by Alan Lee on 10/24/20.
//

#include "general_learning.hpp"
#include <iostream>
#include <string>

void general_learning() {
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
  for (int x=10; x<20; x++) {
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
  
  // Switch statements
  char switch_statement = 'B';
  
  switch (switch_statement) {
    case 'A':
      std::cout << "AAAAA" << "\n";
      break;
    case 'B':
      std::cout << "BBBBB" << "\n";
      break;
    case 'C':
      std::cout << "CCCCC" << "\n";
      break;
    default:
      std::cout << "Other" << "\n";
  }
  
  // Calling a function
  int function_test = max(2, 3);
  std::cout << function_test << std::endl;
  
  // Arrays and functions
  int array[] = {1, 2, 3, 4, 5, 6};
  // std::cout << sizeof(array) << std::endl;
  // std::cout << sizeof(array[0]) << std::endl;
  int array_size = sizeof(array);
  std::cout << "Pointer: " << array_lengthp(array, array_size) << std::endl;
  std::cout << array[0] << std::endl;
  std::cout << "Reference: " << array_lengthr(array) << std::endl;
  std::cout << array[0] << std::endl;
}

int max(int num1, int num2) {
  // Local variable
  int result;
  
  if (num1 > num2) {
    result = num1;
  }
  else {
    result = num2;
  }
  return result;
}

//int math_desc(int array[]) {
//
//  for (int index = 0;  )
//}

// Pass by pointer
double array_lengthp(int *arr, int array_size) {
  double length = array_size/sizeof(arr[0]);
  arr[0] = 99;
  return length;
}

// Pass by reference
double array_lengthr(int (&arr)[6]) {
  double length = sizeof(arr)/sizeof(arr[0]);
  arr[0] = 50;
  return length;
}
