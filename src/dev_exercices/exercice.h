
#ifndef SRC_DEV_EXERCICES_EXERCICE_H_
#define SRC_DEV_EXERCICES_EXERCICE_H_


/** @namespace dev_exercices */
namespace dev_exercices {
class Matrix;
/**
 * @brief updateMatrix set the entire row and column when an element of this
 *        column or row is 0
 *
 * @param [in] ioMatrix a matrix to rotate
 * @param [in] size corresponding to the number of lines and columuns
 *
 * @return ioMatrix the rotate matrix
 */
void updateMatrix(Matrix& ioMatrix);


}  // namespace dev_exercices

#endif  // SRC_DEV_EXERCICES_EXERCICE_H_
