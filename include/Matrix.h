﻿#ifndef MATRIX_H
#define MATRIX_H

#include <complex>

namespace math_club
{
  class Matrix 
  {
  public:
    typedef std::complex<double> Complex;
    Matrix(void)  //无输入时，返回空函数
    : rowSize(0), colSize(0) {};

    Matrix(int rowLen, int colLen); //

    ~Matrix(void) { delete [] ArrayData; }
    
    //需修正： 增加行，列超过范围的判断
    inline Complex& operator()(int row, int col) { return ArrayData[row * colSize + col]; }

  private:
    int rowSize; //矩阵行数
    int colSize; //矩阵列数
    Complex *ArrayData; //矩阵数据

  };
}

#endif

