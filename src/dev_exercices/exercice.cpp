#include "dev_exercices/exercice.h"

#include "dev_exercices/Matrix.h"

#include <vector>

namespace dev_exercices {

void updateMatrix(Matrix& ioMatrix){
  int rowSize = ioMatrix.size();
  int columnSize = 0;
  if (rowSize > 0){
    columnSize = ioMatrix.front().size();
  }

  std::vector<bool> isRowContains0(rowSize,false);
  std::vector<bool> isColumnContains0(rowSize,false);

  for(int i = 0; i < rowSize; ++i ){
    for(int j = 0; j < columnSize; ++j ){
      if (ioMatrix[i][j] == 0){
        isColumnContains0[j] = true;
        isRowContains0[i] = true;
        break;
      }
    }
  }

  for(int i = 0; i < rowSize; ++i ){
    for(int j = 0; j < columnSize; ++j ){
      if (isColumnContains0[j] || isRowContains0[i]){
        ioMatrix[i][j] = 0;
      }
    }
  }

}


}  // namespace dev_exercices
