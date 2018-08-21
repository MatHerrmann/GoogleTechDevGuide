/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Position.hpp
 * Author: mherrman
 *
 * Created on 17. August 2018, 15:11
 */

#ifndef POSITION_HPP
#define POSITION_HPP

class Position {
public:
    Position(unsigned int x, unsigned int y) : x(x), y(y){};
    virtual ~Position(){};
    unsigned int getX() const{
        return x;
    }
    unsigned int getY() const{
        return y;
    }
    bool operator==(const Position& p){
      if (p.x == this->x && p.y == this->y){
        return true;
      } else {
        return false;
      }
    }
private:
    const unsigned int x;
    const unsigned int y;
};

#endif /* POSITION_HPP */

