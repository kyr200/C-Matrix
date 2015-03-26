/* 
 * File:   main.cpp
 * Author: Kyran
 *
 * Created on March 19, 2015, 4:29 PM
 */

#include <cstdlib>
#include <iostream>
#include "matrix.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    matrix h = matrix(3);
    matrix p = matrix(4);
    matrix q;
    h.setMatrix();
    p.setMatrix();
    q = h + p;
    cout << q;
    return 0;
}

