/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Matrix.hpp
 * Author: mherrman
 *
 * Created on 15. August 2018, 09:51
 */

#ifndef MATRIX_HPP
#define MATRIX_HPP

#include <iostream>
#include "Position.hpp"

template <typename T>
class Matrix {
private:
    unsigned int rows, cols;
    T** matrix;
    bool isPositionWithinMatrix(const Position& p){
        if (p.getX() >= cols || p.getY() >= rows){
            return false;
        }else {
            return true;
        }
    }
public:
    Matrix(const int cols,const int rows){
        
        if (rows > 0 && cols > 0){
            matrix = new T*[rows];
            for (int i = 0; i < rows; ++i){
                matrix[i] = new T[cols];
            }
            this->cols = cols;
            this->rows = rows;
            
        }else{
            std::cout << "Invalid parameter (Both rows and columns need to be greater than 0" << '\n' << "Entered rows: " << rows << '\n' << "Entered columns: " << cols;            
        }
    }
    unsigned int getRows(){
        return rows;
    }
    unsigned int getCols() {
        return cols;
    }
    bool put(const Position& p, const T& element){
        if (isPositionWithinMatrix(p) == true){
            matrix[p.getY()][p.getX()] = element;
            return true;
        }else {
            std::cout << "Target position is not within the matrix" << '\n'
                    << "Matrix boundaries: " << '\n'
                    << "Valid row range: 0 - " << this->rows << '\n'
                    << "Valid column range: 0 - " << this->cols;
            return false;
        }
    }
    T get(const Position& p){
        return getRef(p);
    }
    
    T& getRef (const Position& p) {
        if (isPositionWithinMatrix(p) == true){
            return matrix[p.getY()][p.getX()];
        }else {
            std::cout << "Target position is not within the matrix" << '\n'
                    << "Matrix boundaries: " << '\n'
                    << "Valid row range: 0 - " << this->rows << '\n'
                    << "Valid column range: 0 - " << this->cols;
        }      
    }
    void setWholeMatrix(const T& element) {
        for (int j = 0; j < rows; ++j){
            for (int i = 0; i < cols; ++i){
                matrix[j][i] = element;
            }
        }
    }

    virtual ~Matrix(){
        for (int i = 0; i < cols; ++i){
            delete[] matrix[i];
        }
        delete[] matrix;
    }
};


#endif /* MATRIX_HPP */

