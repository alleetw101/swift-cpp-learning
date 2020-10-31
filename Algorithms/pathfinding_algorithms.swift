//
//  pathfinding_algorithms.swift
//  Swift Target
//
//  Created by Alan Lee on 10/30/20.
//

import Foundation

func lee_pathfinding(board: [[Int]]) -> (length: Int, path: [[Int]]) {
  var path_length = 0
  var path = [[]]
  var height = board.count
  var width = board[0].count
  
  var flat_board = board.compactMap {$0}
  
  
  return (path_length, [[0]])
}

func generate_diverging_deadend_points(board: [Int], width: Int) -> (diverging: [Int], deadend: [Int]) {
  var diverging = [Int]()
  var deadend = [Int]()
  
  let length = board.count
  
  // Creates arrays of diverging and dead points from board parameter
  var neighbors: Int
  for index in 1...length - 2 {
    neighbors = 0
    
    if board[index] == 0 {
      if index >= width && board[index - width] == 0 {
        neighbors += 1
      }
      if index % width != 0 && board[index - 1] == 0 {
        neighbors += 1
      }
      if index % width != width - 1 && board[index + 1] == 0 {
        neighbors += 1
      }
      if length - index > width && board[index + width] == 0 {
        neighbors += 1
      }
      
      if neighbors >= 3 {
        diverging.append(index)
      } else if neighbors == 1 {
        deadend.append(index)
      }
    }
  }
  
  diverging.insert(0, at: 0)
  diverging.append(length - 1)
  
  var filter_diverging = [Int]()
  for index in 0...length - 1 {
    neighbors = 0
    if diverging[index] >= width && diverging.contains(diverging[index] - width) {
      neighbors += 1
    }
  }
  
  return (diverging, deadend)
}
