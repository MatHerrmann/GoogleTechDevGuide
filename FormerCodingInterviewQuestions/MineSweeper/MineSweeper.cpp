/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   MineSweeper.cpp
 * Author: mherrman
 * 
 * Created on 17. August 2018, 15:21
 */

#include "MineSweeper.hpp"
#include <string>
#include <iostream>
#include <iomanip>

MineSweeper::~MineSweeper() {
}

void MineSweeper::printField() {
  const unsigned int rows = field.getRows();
  const unsigned int cols = field.getCols();
  
  std::cout << "Printing field ...." << '\n' ;
  for (unsigned int y = 0; y < rows; ++y){
    for (unsigned int x = 0; x < cols; ++x){
      std::cout << std::setw(2) << field.get(*(new Position(x,y))) << " ";
    }
    std::cout << '\n';
  }
  
  
  
  
}

Position MineSweeper::placeMine() {
  for (unsigned int i = 0; i < MAX_TRIES; ++i){
    // Generate a random position within the field
    Position positionMine(rand() % FIELD_SIZE_X, rand() % FIELD_SIZE_Y);

    // Check if the position is already occupied by a mine  
    if (field.getRef(positionMine) != MINE){
      field.put(positionMine, MINE);
      return positionMine;
    }
  }
  std::cout << "Could not find an unoccupied space in " << MAX_TRIES << " tries\n";  
}
void MineSweeper::incrementValue(const Position& p){
  ++field.getRef(p);
  //field.put(p, 1 + (field.get(p)));
}