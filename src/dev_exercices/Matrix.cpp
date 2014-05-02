#include "dev_exercices/Matrix.h"

#include <sstream> 

namespace dev_exercices {

  Matrix::Matrix(int iSize){
    resize(iSize);
    for(std::vector<int>& aLine : *this)
    {
      aLine.resize(iSize);
    }
  }

  Matrix::~Matrix(){

  }

  std::string Matrix::toString(){
    std::stringstream output;

    for(std::vector<int>& aLine : *this)
    {
      output << "[ ";
      for(int& value : aLine)
      {
        output << value << " ";
      }
      output << "]\n";
    }

    return output.str();
  }
}
