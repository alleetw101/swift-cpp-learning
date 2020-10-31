//
//  main.swift
//  Swift Target
//
//  Created by Alan Lee on 10/24/20.
//

print("main.swift")
// general_learning()

var test_array = [1.2, 4.5, 1.2, 2.4, 8.3, 2.4, 4.3]
var test_array2 = [1.2, 4.5, 6.2, 2.4, 8.3, 2.4, 4.3]

quicksort(array: &test_array, start: 0, end: 6, type: "middle")
quicksort(array: &test_array2, start: 0, end: 6, type: "middle")
print(test_array)
print(test_array2)
