#include <gtest/gtest.h>

#include "dev_exercices/exercice.h"
#include "dev_exercices/BubbleSort.h"
#include "dev_exercices/SelectSort.h"
#include "dev_exercices/MergeSort.h"
#include "dev_exercices/QuickSort.h"
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
  for(int i = 0; i < iData.size(); ++i){
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

TEST(SelectSort, arrayAlreadySorted) {
  sortalgo::SortAlgoInterface* _pAlgo = new sortalgo::SelectSort();
  EXPECT_TRUE(_pAlgo != NULL);

  std::vector<int> data = {1,2,3,4,5,6,7,8,9,10};

  _pAlgo->sort(data);
  TestSort(data);

  delete _pAlgo;
}

TEST(SelectSort, arrayNotSorted) {
  sortalgo::SortAlgoInterface* _pAlgo = new sortalgo::SelectSort();
  EXPECT_TRUE(_pAlgo != NULL);

  std::vector<int> data = {1,5,3,4,2,8,6,12,16,13};
  int sizeBefore = data.size();

  _pAlgo->sort(data);
  printVector(data);
  EXPECT_EQ(sizeBefore,data.size());
  TestSort(data);

  delete _pAlgo;
}


TEST(MergeSort, arrayAlreadySorted) {
  sortalgo::SortAlgoInterface* _pAlgo = new sortalgo::MergeSort();
  EXPECT_TRUE(_pAlgo != NULL);

  std::vector<int> data = {1,2,3,4,5,6,7,8,9,10};

  _pAlgo->sort(data);
  TestSort(data);

  delete _pAlgo;
}

TEST(MergeSort, arrayNotSorted) {
  sortalgo::SortAlgoInterface* _pAlgo = new sortalgo::MergeSort();
  EXPECT_TRUE(_pAlgo != NULL);

  std::vector<int> data = {1,5,3,4,2,8,6,12,16,13};
  int sizeBefore = data.size();

  _pAlgo->sort(data);
  printVector(data);
  EXPECT_EQ(sizeBefore,data.size());
  TestSort(data);

  delete _pAlgo;
}



TEST(QuickSort, arrayAlreadySorted) {
  sortalgo::SortAlgoInterface* _pAlgo = new sortalgo::QuickSort();
  EXPECT_TRUE(_pAlgo != NULL);

  std::vector<int> data = {1,2,3,4,5,6,7,8,9,10};

  _pAlgo->sort(data);
  TestSort(data);

  delete _pAlgo;
}

TEST(QuickSort, arrayNotSorted) {
  sortalgo::SortAlgoInterface* _pAlgo = new sortalgo::QuickSort();
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
