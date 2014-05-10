#ifndef SRC_DEV_EXERCICES_BUBBLESORT_H_
#define SRC_DEV_EXERCICES_BUBBLESORT_H_

#include "dev_exercices/SortAlgoInterface.h"

/** @namespace sortalgo */
namespace sortalgo {

/**
 * @brief Implementation of BubbleSort algo
 */
class BubbleSort : public SortAlgoInterface{
public:
  BubbleSort() {};
  virtual ~BubbleSort() {};

  void sort(std::vector<int> &iData);
};

}  // namespace sortalgo

#endif  // SRC_DEV_EXERCICES_BUBBLESORT_H_
