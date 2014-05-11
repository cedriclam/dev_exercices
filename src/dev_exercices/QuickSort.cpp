#include "dev_exercices/QuickSort.h"

#include <limits>
#include <iostream>

/** @namespace sortalgo */
namespace sortalgo {

void QuickSort::sort(std::vector<int> &iData)
{
  int maxIndex = iData.size() - 1;

  QuickSortVector(iData,0,maxIndex);
}

void QuickSort::QuickSortVector(std::vector<int> &iData, int iLeft, int iRight)
{
  if( iLeft < iRight )
  {
    int pivotValue = iData[iLeft];
    // divide and conquer
    int pivotIndex = Partition( iData, iLeft, iRight,pivotValue);
    // recursive on the two part
    QuickSortVector(iData,iLeft,pivotIndex - 1);
    QuickSortVector(iData,pivotIndex + 1,iRight);
  }
}
int QuickSort::Partition(std::vector<int> &iData, int iLeft, int iRight, int pivotValue)
{
  int i = iLeft;
  int j = iRight + 1;
  int tmp;

  while( 1)
  {
    do ++i; while( (iData[i] <= pivotValue) && (i <= iRight) ) ;
    do --j; while( iData[j] > pivotValue ) ;

    if ( i >= j ) { break; }

    Swap(iData[i],iData[j]);
  }

  Swap(iData[iLeft],iData[j]);

  return j;
}

void QuickSort::Swap(int& ioVal1, int& ioVal2){
  int tmp = ioVal1;
  ioVal1 = ioVal2;
  ioVal2 = tmp;
}


}  // namespace sortalgo
