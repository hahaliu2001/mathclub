#include <iostream>
#include <fstream>
#include <complex>

#include "Matrix.h"

int main() 
{
  std::complex<double> mycomplex;
  std::string line;

  mycomplex = 10.0;   // 10
  mycomplex += 2.0;   // 12

  mycomplex = std::complex<double>(10.0,1.0);  // 10+i

  mycomplex = mycomplex + 10.0 ;               // 20+i

  if (mycomplex == std::complex<double>(20.0,1.0))
    std::cout << "mycomplex is " << mycomplex << '\n' <<std::endl;

  math_club::Matrix myMatrix(2,2);
  myMatrix(0,0) = mycomplex;
  std::cout << "myMatrix is " << myMatrix(0,0) << std::endl;

  while(1) {
    const std::string prompt = ">> ";
    std::cout << prompt;
    std::getline(std::cin, line);
    std::cout << "readline: " << line << '\n' << std::endl;
  }
  return 0;
}