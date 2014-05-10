#ifndef SRC_DEV_EXERCICES_SELECTSORT_H_
#define SRC_DEV_EXERCICES_SELECTSORT_H_

#include "dev_exercices/SortAlgoInterface.h"

/** @namespace sortalgo */
namespace sortalgo {

/**
 * @brief Implementation of SelectSort algo
 */
class SelectSort : public SortAlgoInterface{
public:
  SelectSort() {};
  virtual ~SelectSort() {};

  void sort(std::vector<int> &iData);

private:
  static void Swap(int& ioVal1, int& ioVal2);
};

}  // namespace sortalgo

#endif  // SRC_DEV_EXERCICES_SELECTSORT_H_
