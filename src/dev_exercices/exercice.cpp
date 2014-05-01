#include "dev_exercices/exercice.h"

#include <algorithm>

namespace dev_exercices {

void replaceSpaceChar(std::string& ioStr){
  static const std::string stringToRemove = " ";
  static const std::string replacementString = "%20";

  std::string output;
  size_t firstPosition = 0;
  size_t secondPosition = 0;
  while ((secondPosition = ioStr.find(stringToRemove,firstPosition)) != std::string::npos){
    output += ioStr.substr(firstPosition, (secondPosition - firstPosition));
    output += replacementString;
    secondPosition += stringToRemove.length();

    firstPosition = secondPosition;
  }

  output += ioStr.substr(firstPosition);

  ioStr.swap(output);
}

}  // namespace dev_exercices
