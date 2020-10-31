//
//  array_sorting_algorithms.swift
//  Swift Target
//
//  Created by Alan Lee on 10/24/20.
//

// Quicksort
/// Sorts an array from least to greatest using the quicksort implementation
/// - Parameters:
///   - array: An array of Double elements  to be sorted
///   - start: Start index of elements to be sorted
///   - end: End index of elements to be sorted
///   - type: A string to specify index to use when partitioning the array ("first", "random", "middle"). Default implementation uses last index.
func quicksort(array: inout [Double], start: Int, end: Int, type: String) {
  if start < end {
    let partition_index = quicksort_partition(array: &array, start: start, end: end, type: type)
    
    quicksort(array: &array, start: start, end: partition_index - 1, type: type)
    quicksort(array: &array, start: partition_index + 1, end: end, type: type)
  }
}

/// Partitions elements of an array around a pivot element between specified indices
/// - Parameters:
///   - array: An array of Double elements to be partitioned
///   - start: Start index of elements to be partitioned
///   - end: End index of elements to be partitioned
///   - type: A string to specify index to use when determining pivot element ("first", "random", "middle"). Default implementation uses last index.
/// - Returns: The index of the pivot element where lower indices contain elements lower than the pivot element and higher indices contain elements greater than the pivot element
func quicksort_partition(array: inout [Double], start: Int, end: Int, type: String) -> Int {
  switch type {
    case "first":
      array.swapAt(start, end)
    case "random":
      array.swapAt(Int.random(in: start...end), end)
    case "middle":
      array.swapAt((end + start) / 2, end)
    default:
      break
  }
  
  var x = start
  let pivot = array[end]
  
  for index in start...end {
    if array[index] < pivot {
      array.swapAt(x, index)
      x += 1
    }
  }
  array.swapAt(x, end)
  return x
}
