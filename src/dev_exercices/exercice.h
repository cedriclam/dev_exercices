
#ifndef SRC_DEV_EXERCICES_EXERCICE_H_
#define SRC_DEV_EXERCICES_EXERCICE_H_

/** @namespace dev_exercices */
namespace dev_exercices {

/**
 * @brief Calculate the square of given number.
 *
 * @param [in] n A number.
 *
 * @return The square of given number n.
 */
int square(int n);

/**
 * @brief Calculate the factorial of given number.
 *
 * @param [in] n A number.
 *
 * @return The factorial of given number n.
 */
inline int factorial(int n) {
  if (n <= 1) {
    return 1;
  }
  return n * factorial(n-1);
}

}  // namespace dev_exercices

#endif  // SRC_DEV_EXERCICES_EXERCICE_H_
