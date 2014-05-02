#include <gtest/gtest.h>

#include "dev_exercices/exercice.h"

#include "dev_exercices/Matrix.h"

namespace dev_exercices {

TEST(exercice, matrixNoZero) {
	const int rowSize = 5;
  const int columnSize = 4;

  Matrix aMatrix = Matrix(rowSize,columnSize);
  aMatrix[0] = {1,1,1,1};
  aMatrix[1] = {1,1,1,1};
  aMatrix[2] = {1,1,1,1};
  aMatrix[3] = {1,1,1,1};
  aMatrix[4] = {1,1,1,1};

  updateMatrix(aMatrix);

  Matrix aMatrixResult = Matrix(rowSize,columnSize);
  aMatrixResult[0] = {1,1,1,1};
  aMatrixResult[1] = {1,1,1,1};
  aMatrixResult[2] = {1,1,1,1};
  aMatrixResult[3] = {1,1,1,1};
  aMatrixResult[4] = {1,1,1,1};

  for (int i = 0; i < rowSize; ++i){
    for (int j = 0; j < columnSize; ++j){
      EXPECT_EQ(aMatrix[i][j],aMatrixResult[i][j]);
    }
  }
}

TEST(exercice, matrixWithOne0) {
  const int rowSize = 5;
  const int columnSize = 4;

  Matrix aMatrix = Matrix(rowSize,columnSize);
  aMatrix[0] = {1,1,1,1};
  aMatrix[1] = {1,0,1,1};
  aMatrix[2] = {1,1,1,1};
  aMatrix[3] = {1,1,1,1};
  aMatrix[4] = {1,1,1,1};

  std::cout << aMatrix.toString() << std::endl << std::endl;

  updateMatrix(aMatrix);

  std::cout << aMatrix.toString() << std::endl << std::endl;

  Matrix aMatrixResult = Matrix(rowSize,columnSize);
  aMatrixResult[0] = {1,0,1,1};
  aMatrixResult[1] = {0,0,0,0};
  aMatrixResult[2] = {1,0,1,1};
  aMatrixResult[3] = {1,0,1,1};
  aMatrixResult[4] = {1,0,1,1};


  for (int i = 0; i < rowSize; ++i){
    for (int j = 0; j < columnSize; ++j){
      EXPECT_EQ(aMatrix[i][j],aMatrixResult[i][j]);
    }
  }
}

TEST(exercice, matrixWithTwo0) {
  const int rowSize = 5;
  const int columnSize = 4;

  Matrix aMatrix = Matrix(rowSize,columnSize);
  aMatrix[0] = {1,1,1,1};
  aMatrix[1] = {1,0,1,1};
  aMatrix[2] = {1,1,1,1};
  aMatrix[3] = {1,1,0,1};
  aMatrix[4] = {1,1,1,1};

  std::cout << aMatrix.toString() << std::endl << std::endl;

  updateMatrix(aMatrix);

  std::cout << aMatrix.toString() << std::endl << std::endl;

  Matrix aMatrixResult = Matrix(rowSize,columnSize);
  aMatrixResult[0] = {1,0,0,1};
  aMatrixResult[1] = {0,0,0,0};
  aMatrixResult[2] = {1,0,0,1};
  aMatrixResult[3] = {0,0,0,0};
  aMatrixResult[4] = {1,0,0,1};


  for (int i = 0; i < rowSize; ++i){
    for (int j = 0; j < columnSize; ++j){
      EXPECT_EQ(aMatrix[i][j],aMatrixResult[i][j]);
    }
  }
}


}  // namespace dev_exercices
