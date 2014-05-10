#ifndef SRC_DEV_EXERCICES_MERGESORT_H_
#define SRC_DEV_EXERCICES_MERGESORT_H_

#include "dev_exercices/SortAlgoInterface.h"

/** @namespace sortalgo */
namespace sortalgo {

/**
 * @brief Implementation of MergeSort algo
 */
class MergeSort : public SortAlgoInterface{
public:
  MergeSort() {};
  virtual ~MergeSort() {};

  void sort(std::vector<int> &iData);

private:
  static void BottomUpMerge(std::vector<int> &iData, int iLeft, int iRight, int iEnd, std::vector<int> &iWorkingData);
};

}  // namespace sortalgo

#endif  // SRC_DEV_EXERCICES_MERGESORT_H_
