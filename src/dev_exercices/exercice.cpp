#include "dev_exercices/exercice.h"

#include "dev_exercices/Matrix.h"

#include <array>

namespace dev_exercices {

void rotate(Matrix& ioMatrix, const int size){
  for(int i = 0; i < (size/2); ++i){
    int last = size - 1 - i;

    for(int j = i; j < size-1; ++j){

      int offset = j - i;

      // save the top left element
      int first = ioMatrix[i][j];

      // move bottom left to top left
      ioMatrix[i][j] = ioMatrix[last - offset][i];

      // move bottom right to bottom left
      ioMatrix[last - offset][i] = ioMatrix[last][last - offset];

      // move top left to bottom left
      ioMatrix[last][last - offset] = ioMatrix[j][last];

      // write the first element to his correct place
      ioMatrix[j][last] = first;
    }
  }
}


}  // namespace dev_exercices
