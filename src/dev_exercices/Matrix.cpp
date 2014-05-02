#include "dev_exercices/Matrix.h"

#include <sstream>

namespace dev_exercices {

  Matrix::Matrix(int iRowSize,int iColumnSize){
    resize(iRowSize);
    for(std::vector<int>& aRow : *this)
    {
      aRow.resize(iColumnSize);
    }
  }

  Matrix::~Matrix(){

  }

  std::string Matrix::toString(){
    std::stringstream output;

    for(std::vector<int>& aRow : *this)
    {
      output << "[ ";
      for(int& value : aRow)
      {
        output << value << " ";
      }
      output << "]\n";
    }

    return output.str();
  }
}
