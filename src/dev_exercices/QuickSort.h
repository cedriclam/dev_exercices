#ifndef SRC_DEV_EXERCICES_QUICKSORT_H_
#define SRC_DEV_EXERCICES_QUICKSORT_H_

#include "dev_exercices/SortAlgoInterface.h"

/** @namespace sortalgo */
namespace sortalgo {

/**
 * @brief Implementation of QuickSort algo
 */
class QuickSort : public SortAlgoInterface{
public:
  QuickSort() {};
  virtual ~QuickSort() {};

  void sort(std::vector<int> &iData);

private:
  static void QuickSortVector(std::vector<int> &iData, int iLeft, int iRight);
  static int Partition(std::vector<int> &iData, int iLeft, int iRight, int pivotIndex);
  static void Swap(int& ioVal1, int& ioVal2);
};

}  // namespace sortalgo

#endif  // SRC_DEV_EXERCICES_QUICKSORT_H_
