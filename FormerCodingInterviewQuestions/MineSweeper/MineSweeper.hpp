/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   MineSweeper.hpp
 * Author: mherrman
 *
 * Created on 17. August 2018, 15:21
 */

#ifndef MINESWEEPER_HPP
#define MINESWEEPER_HPP
#include "Matrix.hpp"
#include <cstdlib> 
#include <ctime>
#include "Position.hpp"

class MineSweeper {
public:

  MineSweeper(const unsigned int FIELD_X, const unsigned int FIELD_Y) : FIELD_SIZE_X(FIELD_X), FIELD_SIZE_Y(FIELD_Y), field(FIELD_X, FIELD_Y) {
    srand((unsigned) time(0));
    numberOfMines = (rand() % (MAX_NR_MINES - MIN_NR_MINES)) + MIN_NR_MINES;
    std::cout << "Number of mines for this game: " << numberOfMines << std::endl;
    if (FIELD_X * FIELD_Y / 2 > numberOfMines) {
      // Initialize field (set all values to 0)
      field.setWholeMatrix(0);

      // Place mines on field
      for (int mineCounter = 0; mineCounter < numberOfMines; ++mineCounter) {        
        Position positionMine = placeMine();        
        //std::cout << "\nMine: " << mineCounter + 1 << ", Position: " << positionMine.getX() << "," << positionMine.getY() << '\n';

        // After placing the mine, update all fields around it
        const unsigned int minRowIndex = ((int) positionMine.getY() - 1) < 0 ? 0 : positionMine.getY() - 1;
        const unsigned int maxRowIndex = (positionMine.getY() + 1) >= FIELD_SIZE_Y ? FIELD_SIZE_Y - 1 : positionMine.getY() + 1;
        const unsigned int minColIndex = ((int) positionMine.getX() - 1) < 0 ? 0 : positionMine.getX() - 1;
        const unsigned int maxColIndex = (positionMine.getX() + 1) >= FIELD_SIZE_X ? FIELD_SIZE_X - 1 : positionMine.getX() + 1;

        for (unsigned int x = minColIndex; x <= maxColIndex; ++x) {
          for (unsigned int y = minRowIndex; y <= maxRowIndex; ++y) {
            Position* p = new Position(x, y);
            //std::cout << x << "," << y << " ";
            if (field.get(*p) != MINE) {
              incrementValue(*p);
            }
          }
          std::cout << std::endl;
        }
      }
    } else {
      field.setWholeMatrix(MINE);

    }
  };
  virtual ~MineSweeper();
  void printField();
private:
  void incrementValue(const Position& p);
  Position placeMine();
  Matrix<int> field;
  unsigned int numberOfMines;
  const unsigned int MAX_NR_MINES = 5;
  const unsigned int MAX_TRIES = 500;
  const unsigned int MIN_NR_MINES = 4;
  const unsigned int FIELD_SIZE_X;
  const unsigned int FIELD_SIZE_Y;
  const int MINE = 9;
};

#endif /* MINESWEEPER_HPP */

