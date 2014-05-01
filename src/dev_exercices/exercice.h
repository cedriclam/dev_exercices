
#ifndef SRC_DEV_EXERCICES_EXERCICE_H_
#define SRC_DEV_EXERCICES_EXERCICE_H_

#include <string>

/** @namespace dev_exercices */
namespace dev_exercices {

/**
 * @brief replace "space" character by "%20"
 *
 * @param [in] ioStr a input string
 *
 * @return ioStr output string with "%20" charactere instead of " "
 */
void replaceSpaceChar(std::string& ioStr);

void replaceSpaceCharV2(std::string& ioStr);

}  // namespace dev_exercices

#endif  // SRC_DEV_EXERCICES_EXERCICE_H_
