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

void replaceSpaceCharV2(std::string& ioStr){
  static const std::string stringToRemove = " ";
  static const std::string replacementString = "%20";
  size_t replacementStringSize = replacementString.length();

  // count the number of "space" character
  size_t nbSpace = std::count(ioStr.begin(), ioStr.end(), ' ');
  // save the curent string length
  size_t lastPosition = ioStr.length() - 1;
  // define the new string length
  size_t newLength = ioStr.length() + (nbSpace * (replacementStringSize-stringToRemove.length()));
  // resize to the new length in order to be able to add the new separator
  ioStr.resize(newLength);

  size_t firstPosition = 0;
  // use revert find in order to start by the end of the string
  // link this we can work ok the same datacontainer
  // we know that the replacement string is longer than the character that we want to remove.
  // if it was the contrary we can use find() instead of rfind
  while ((firstPosition = ioStr.rfind(stringToRemove,lastPosition)) != std::string::npos){
    // define the substring  size to move
    size_t subStrSize = lastPosition - firstPosition;

    // move the substring.
    ioStr.replace(newLength - subStrSize, subStrSize,ioStr.substr(firstPosition+1,subStrSize));
    // add the new separator
    ioStr.replace(newLength - (subStrSize + replacementStringSize), replacementStringSize, replacementString);

    // update postion and length for the next iteration
    lastPosition = firstPosition - 1;
    newLength -= subStrSize + replacementStringSize;
  }

}

}  // namespace dev_exercices
