#include "dev_exercices/MergeSort.h"

#include <limits>
#include <algorithm>

/** @namespace sortalgo */
namespace sortalgo {

void MergeSort::sort(std::vector<int> &iData)
{
  int size = iData.size();
  std::vector<int> workingVector(iData.size());

  for (int width = 1; width < size; width = 2*width){
    for (int i = 0; i < size; i = i + 2*width){
      /* Merge two runs: iData[i:i+width-1] and A[i+width:i+2*width-1] to workingVector[] */
      /* or copy idata[i:n-1] to workingVector[] ( if(i+width >= n) ) */
      int left = i;
      int right = std::min(i+width, size);
      int end = std::min(i+2*width,size);
      BottomUpMerge(iData,left,right,end,workingVector);
    }

    iData.swap(workingVector);
  }
}

void MergeSort::BottomUpMerge(std::vector<int> &iData, int iLeft, int iRight, int iEnd, std::vector<int> &iWorkingData){
  int i0 = iLeft;
  int i1 = iRight;

  /* While there are elements in the left or right lists */
  for (int j = iLeft; j < iEnd; ++j)
  {
      /* If left list head exists and is <= existing right list head */
      if ((i0 < iRight)
          && ((i1 >= iEnd) || (iData[i0] <= iData[i1])))
      {
          iWorkingData[j] = iData[i0];
          i0 = i0 + 1;
      }
      else
      {
          iWorkingData[j] = iData[i1];
          i1 = i1 + 1;
      }
  }
}

}  // namespace sortalgo
