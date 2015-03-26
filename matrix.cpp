/* 
 * File:   matrix.cpp
 * Author: Kyran
 * 
 * Created on March 19, 2015, 4:30 PM
 */

#include "matrix.h"
#include <iostream>
#include <iomanip>
#include <sstream>
using namespace std;

matrix::matrix() : size(0) {
    mat.resize(0);
}

matrix::matrix(int sizem) : size(sizem){
    mat.resize(size);
    for(int row = 0; row < size; row++){
        mat[row].resize(size);
    }
}

const int matrix::getSize() const{
    return size;
}

int matrix::setMatrix(){
    string line;
    int i = 0;
    for(int row = 0; row < size; row++){
        cout << "Please input row" << row+1 << ": ";
        getline(cin, line);
        istringstream parse(line);
        
        for(int col = 0; col < size; col++){
            parse >> i;
            mat[row][col]=i;
        }
    }
}

const int matrix::getElement(int row, int col) const{
    return mat[row][col];
}

void matrix::setElement(int row, int col, int element){
    mat[row][col] = element;
}

const matrix matrix::operator +(const matrix &rhs){
    
    if(size == rhs.getSize()){
        matrix sum = matrix(size);
        for(int row=0; row<size; row++){
            for(int col=0; col<size; col++){
                sum.mat[row][col] = mat[row][col] + rhs.mat[row][col];
            }
        }
        return sum;
    } else{
        return 0;
    }
}

ostream& operator<<(ostream& os, const matrix &m){   
    
    for(int row = 0; row < m.getSize(); row++){
        os << "[ ";
        for(int col = 0; col < m.getSize(); col++){
            os << setw(4) << m.getElement(row, col);
        }
        os << setw(5) << "]\n";
    }
    
    return os;
}