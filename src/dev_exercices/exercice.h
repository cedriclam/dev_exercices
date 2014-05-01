
#ifndef SRC_DEV_EXERCICES_EXERCICE_H_
#define SRC_DEV_EXERCICES_EXERCICE_H_

#include <string>

/** @namespace dev_exercices */
namespace dev_exercices {

/**
 * @brief Check if all the char present in the input string are unique
 *
 * @param [in] iString a string.
 *
 * @return true: if all char are unique.
 * @return false: if at least on of the char is present more than one time
 */
 bool AreAllUnique(const std::string &iString);

}  // namespace dev_exercices

#endif  // SRC_DEV_EXERCICES_EXERCICE_H_
