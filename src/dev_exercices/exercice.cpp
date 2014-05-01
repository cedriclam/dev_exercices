#include "dev_exercices/exercice.h"

#include <algorithm>
#include <unordered_map>

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

typedef std::unordered_map<char,int> HashMap;

bool areAnagramV2(const std::string &iStr1,const std::string &iStr2){

  if (iStr1.length() != iStr2.length()){
    // anagram should have the same size
    return false;
  }

  HashMap charMap;

  // populate HashMap from iStr1
  for(const char &aChar : iStr1){
    ++charMap[aChar];
  }

  for(const char &aChar : iStr2){
    --charMap[aChar];

    if(charMap[aChar] == 0){
      charMap.erase(aChar);
    }
  }

  if (charMap.size() > 0){
    return false;
  }

  return true;
}

}  // namespace dev_exercices
