
#ifndef SRC_DEV_EXERCICES_EXERCICE_H_
#define SRC_DEV_EXERCICES_EXERCICE_H_

#include <string>

/** @namespace dev_exercices */
namespace dev_exercices {

/**
 * @brief check if two string are anagrams
 *
 * @param [in] iStr1 the first string
 * @param [in] iStr2 the first string
 *
 * @return true: if the two string are anagrams
 * @return false: if the two string are not anagrams
 */
bool areAnagram(const std::string &iStr1,const std::string &iStr2);

bool areAnagramV2(const std::string &iStr1,const std::string &iStr2);

}  // namespace dev_exercices

#endif  // SRC_DEV_EXERCICES_EXERCICE_H_
