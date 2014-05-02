
#ifndef SRC_DEV_EXERCICES_EXERCICE_H_
#define SRC_DEV_EXERCICES_EXERCICE_H_

#include <vector>

/** @namespace dev_exercices */
namespace dev_exercices {
class Matrix;
/**
 * @brief rotate90 rotate the input matrix by 90degree. the matrix is a square
 *
 * @param [in] ioMatrix a matrix to rotate
 * @param [in] size corresponding to the number of lines and columuns
 *
 * @return ioMatrix the rotate matrix
 */
void rotate(Matrix& ioMatrix, const int size);


}  // namespace dev_exercices

#endif  // SRC_DEV_EXERCICES_EXERCICE_H_
