#include "dev_exercices/exercice.h"

#include <algorithm>

namespace dev_exercices {

bool areAnagram(const std::string &iStr1,const std::string &iStr2){
  if (iStr1.length() != iStr2.length()){
    // anagram should have the same size
    return false;
  }

  std::string iStr1Sorted = iStr1;
  std::sort(iStr1Sorted.begin(),iStr1Sorted.end());

  std::string iStr2Sorted = iStr2;
  std::sort(iStr2Sorted.begin(),iStr2Sorted.end());

  if (iStr1Sorted != iStr2Sorted){
    return false;
  }

  return true;
}

}  // namespace dev_exercices
