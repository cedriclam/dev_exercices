#include "dev_exercices/exercice.h"

namespace dev_exercices {

void removeDuplicate(std::string & iStr){
  int nbCharToRemove = 0;
  char tmpChar;
  for (int i = 0; i < iStr.length(); ++i){
    tmpChar = iStr[i];
    nbCharToRemove = 0;

    for (int j = i + 1; j < iStr.length(); ++j){
      if (iStr[i] == iStr[j]){
        ++nbCharToRemove;
      }
      else {
        iStr[j-nbCharToRemove] = iStr[j];
      }
    }

    iStr.resize(iStr.length() - nbCharToRemove);

  }
}

}  // namespace dev_exercices
