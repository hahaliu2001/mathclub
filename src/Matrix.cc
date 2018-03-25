#include "Matrix.h"

namespace math_club
{
  Matrix::Matrix(int rowLen, int colLen)
  {
    int totalSize;
    rowSize = rowLen;
    colSize = colLen;

    totalSize = rowSize * colSize;
    if(totalSize) {
      ArrayData = new Complex[totalSize];
    }
  }
}
