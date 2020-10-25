//
//  array_sorting_algorithms.swift
//  Learning
//
//  Created by Alan Lee on 10/24/20.
//

import Foundation

// Quicksort
// Core sort function
func quicksort(array: [Double]) -> [Double] {
  
  if array.count <= 1 {
    return array
  }
  
  var return_array = [Double]()
  
  let pivot = quicksort_get_pivot(array: array, type: "first")
  return_array = (quicksort(array: quicksort_partition(array: array, pivot: pivot).lower) + [pivot] +
                    quicksort(array: quicksort_partition(array: array, pivot: pivot).higher))
  
  return return_array
}

// TODO: Use index instead of value for repetition cases
func quicksort_get_pivot(array: [Double], type: String = "mean") -> Double {
  var pivot_value: Double
  
  switch type {
  case "first":
    pivot_value = array[0]
  case "last":
    pivot_value = array[array.count - 1]
  default:
    pivot_value = array[(array.count - 1) / 2]
  }
  
  return pivot_value
}

func quicksort_partition(array: [Double], pivot: Double) -> (lower: [Double], higher: [Double]) {
  var lower = [Double]()
  var upper = [Double]()
  
  for index in 0...array.count - 1 {
    if array[index] < pivot {
      lower.append(array[index])
    } else if array[index] != pivot {
      upper.append(array[index])
    }
  }
  return (lower, upper)
}
