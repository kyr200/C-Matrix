/* 
 * File:   matrix.h
 * Author: Kyran
 *
 * Created on March 19, 2015, 4:30 PM
 */

#ifndef MATRIX_H
#define	MATRIX_H
#include <vector>
using namespace std;

class matrix {
public:
	matrix();
	matrix(int sizem);
        const int getSize() const;
        int setMatrix();
        const int getElement(int row, int col) const;
        void setElement(int row, int col, int element);
	const matrix operator +(const matrix &rhs);
        friend ostream& operator<<(ostream& os, const matrix& mat);
private:
        int size;
        vector< vector<int> > mat;
};

#endif	/* MATRIX_H */

