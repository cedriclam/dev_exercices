#include <gtest/gtest.h>

#include "dev_exercices/exercice.h"
#include "dev_exercices/Node.h"
#include "dev_exercices/Stack.h"

#include <cstddef>

#include <limits>

namespace dev_exercices {

TEST(stack, emptyStack) {

  Stack aStack;

  EXPECT_TRUE(aStack.pop() == NULL);

  EXPECT_EQ(aStack.min() , std::numeric_limits<int>::min());
}


TEST(stack, pushOneValue) {

  Stack aStack;
  aStack.push(5);

  EXPECT_EQ(aStack.min() , 5);
  EXPECT_TRUE(aStack.pop() != NULL);
  EXPECT_EQ(aStack.min() , std::numeric_limits<int>::min());


}

TEST(stack, pushTwoValueInOrder) {

  Stack aStack;
  aStack.push(5);

  EXPECT_EQ(aStack.min() , 5);

  aStack.push(6);
  EXPECT_EQ(aStack.min() , 5);

  EXPECT_TRUE(aStack.pop() != NULL);
  EXPECT_EQ(aStack.min() , 5);
  EXPECT_TRUE(aStack.pop() != NULL);
  EXPECT_EQ(aStack.min() , std::numeric_limits<int>::min());
  EXPECT_TRUE(aStack.pop() == NULL);
  EXPECT_EQ(aStack.min() , std::numeric_limits<int>::min());


}

TEST(stack, pushThreeValue) {

  Stack aStack;
  aStack.push(5);

  EXPECT_EQ(aStack.min() , 5);

  aStack.push(2);
  EXPECT_EQ(aStack.min() , 2);

  aStack.push(4);
  EXPECT_EQ(aStack.min() , 2);

  EXPECT_TRUE(aStack.pop() != NULL);
  EXPECT_EQ(aStack.min() , 2);

  EXPECT_TRUE(aStack.pop() != NULL);
  EXPECT_EQ(aStack.min() , 5);
  EXPECT_TRUE(aStack.pop() != NULL);
  EXPECT_EQ(aStack.min() , std::numeric_limits<int>::min());
  EXPECT_TRUE(aStack.pop() == NULL);
  EXPECT_EQ(aStack.min() , std::numeric_limits<int>::min());


}

}  // namespace dev_exercices
