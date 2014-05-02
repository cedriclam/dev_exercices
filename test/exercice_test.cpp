#include <gtest/gtest.h>

#include "dev_exercices/exercice.h"

#include "dev_exercices/Matrix.h"

namespace dev_exercices {

TEST(exercice, matrixN5_0everyWhere) {
	const int size = 5;

  Matrix aMatrix = Matrix(size);
  aMatrix[0] = {0,0,0,0,0};
  aMatrix[1] = {0,0,0,0,0};
  aMatrix[2] = {0,0,0,0,0};
  aMatrix[3] = {0,0,0,0,0};
  aMatrix[4] = {0,0,0,0,0};

  rotate(aMatrix,size);

  int matrixResultat[5][5] = {0};
  for (int i = 0; i < size; ++i){
    for (int j = 0; j < size; ++j){
      EXPECT_EQ(aMatrix[i][j],matrixResultat[i][j]);
    }
  }
}

TEST(exercice, matrixN5_onValue) {
  const int size = 5;

  Matrix aMatrix = Matrix(size);
  aMatrix[0] = {1,0,6,0,2};
  aMatrix[1] = {0,0,0,0,0};
  aMatrix[2] = {0,7,0,0,0};
  aMatrix[3] = {0,0,0,0,0};
  aMatrix[4] = {4,0,0,8,3};

  rotate(aMatrix,size);

  Matrix aMatrixCheck = Matrix(size);
  aMatrixCheck[0] = {4,0,0,0,1};
  aMatrixCheck[1] = {0,0,7,0,0};
  aMatrixCheck[2] = {0,0,0,0,6};
  aMatrixCheck[3] = {8,0,0,0,0};
  aMatrixCheck[4] = {3,0,0,0,2};


  for (int i = 0; i < size; ++i){
    for (int j = 0; j < size; ++j){
      EXPECT_EQ(aMatrix[i][j],aMatrixCheck[i][j]);
    }
  }
}


}  // namespace dev_exercices
