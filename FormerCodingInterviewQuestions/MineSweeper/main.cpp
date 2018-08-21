/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: mherrman
 *
 * Created on 15 August 2018, 08:01
 */

#include <cstdlib>
#include "MineSweeper.hpp"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
  MineSweeper ms(10,5);
  //std::cout << "Please enter your position: ";
  ms.printField();
  return 0;
}

