#pragma once

#include <iostream>
using namespace std;
template <class T>
class matrix;
template <class T>

ostream& operator<<(ostream& os, const matrix<T> & dat);

template <class T>
class matrix{
	friend std::ostream &operator<< <T>(std::ostream &,const matrix<T> & );
    private:
        T** M;
        size_t n_rows;
        size_t n_columns;
        int r = 0;
        int c = 0;
        
    public:
        matrix(size_t nr=0, size_t nc=0);
        matrix(const matrix<T> & dat);
        ~matrix();
        T & operator()(size_t i, size_t j);
        matrix<T> operator + (const matrix<T> & dat);
        matrix<T> operator * (const matrix<T> & dat);
        matrix<T>&operator << (const T v);
};
#include "matrix.inl"
