#include "dev_exercices/BubbleSort.h"


/** @namespace sortalgo */
namespace sortalgo {

void BubbleSort::sort(std::vector<int> &iData)
{
  int maxIndex = iData.size() - 1;
  bool isSorted = false;
  while(!isSorted){
    isSorted = true;
    for(int i = 0; i < maxIndex -1; ++i){
      if (iData[i] > iData[i+1]){
        int tmp = iData[i+1];
        iData[i+1] = iData[i];
        iData[i] = tmp;
        isSorted = false;
      }
    }
  }
}

}  // namespace sortalgo
