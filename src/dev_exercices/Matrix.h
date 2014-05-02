
#ifndef SRC_DEV_EXERCICES_MATRIX_H_
#define SRC_DEV_EXERCICES_MATRIX_H_

#include <vector>
#include <string>

/** @namespace dev_exercices */
namespace dev_exercices {

class Matrix: public std::vector<std::vector<int> >{
public:
  Matrix(int iSize);
  virtual ~Matrix();

  std::string toString();
};

}

#endif  // SRC_DEV_EXERCICES_MATRIX_H_
