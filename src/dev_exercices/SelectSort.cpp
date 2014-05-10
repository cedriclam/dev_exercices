#include "dev_exercices/SelectSort.h"

#include <limits>

/** @namespace sortalgo */
namespace sortalgo {

void SelectSort::sort(std::vector<int> &iData)
{
  int maxIndex = iData.size();

  for(int i = 0; i < maxIndex; ++i){
    int min = std::numeric_limits<int>::max();

    int minIndex = i;

    for(int j = i; j < maxIndex; ++j){
      if (iData[j] <= min){
        minIndex = j;
        min = iData[j];
      }
    }

    if (minIndex > i){
      Swap(iData[i], iData[minIndex]);
    }
  }
}

void SelectSort::Swap(int& ioVal1, int& ioVal2){
  int tmp = ioVal1;
  ioVal1 = ioVal2;
  ioVal2 = tmp;
}

}  // namespace sortalgo
