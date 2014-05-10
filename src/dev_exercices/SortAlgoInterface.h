
#ifndef SRC_DEV_EXERCICES_SHORTALGOINTEFACE_H_
#define SRC_DEV_EXERCICES_SHORTALGOINTEFACE_H_

#include <vector>

/** @namespace sortalgo */
namespace sortalgo {

/**
 * @brief Interface for different sort algorithm
 *
 * @param [in]
 *
 * @return
 */
class SortAlgoInterface{
public:
  SortAlgoInterface(){};
  virtual ~SortAlgoInterface(){};

  virtual void sort(std::vector<int> &iData) = 0;
};

}  // namespace sortalgo

#endif  // SRC_DEV_EXERCICES_SHORTALGOINTEFACE_H_
