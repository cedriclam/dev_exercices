#include <gtest/gtest.h>

#include "dev_exercices/exercice.h"
#include "dev_exercices/BubbleSort.h"
#include "dev_exercices/SortAlgoInterface.h"

#include <vector>
#include <iostream>

namespace dev_exercices {

void TestSort(const std::vector<int> &iData) {
  for(int i = 1; i < iData.size()-1; ++i){
    EXPECT_TRUE(iData[i-1] <= iData[i]);
  }
}

void printVector(const std::vector<int> &iData){
  std::cout << "[";
  for(int i = 1; i < iData.size()-1; ++i){
    std::cout << iData[i] << " ";
  }
  std::cout << "]" << std::endl;
}

TEST(bubbleSort, arrayAlreadySorted) {
  sortalgo::SortAlgoInterface* _pAlgo = new sortalgo::BubbleSort();
  EXPECT_TRUE(_pAlgo != NULL);

  std::vector<int> data = {1,2,3,4,5,6,7,8,9,10};

  _pAlgo->sort(data);
  TestSort(data);

  delete _pAlgo;
}

TEST(bubbleSort, arrayNotSorted) {
  sortalgo::SortAlgoInterface* _pAlgo = new sortalgo::BubbleSort();
  EXPECT_TRUE(_pAlgo != NULL);

  std::vector<int> data = {1,5,3,4,2,8,6,12,16,13};
  int sizeBefore = data.size();

  _pAlgo->sort(data);
  printVector(data);
  EXPECT_EQ(sizeBefore,data.size());
  TestSort(data);

  delete _pAlgo;
}



}  // namespace dev_exercices
