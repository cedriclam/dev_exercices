#include <gtest/gtest.h>

#include "dev_exercices/exercice.h"
#include "dev_exercices/Node.h"
#include "dev_exercices/SetOfStacks.h"

#include <cstddef>

namespace dev_exercices {

TEST(SetOfStacks, zeroAndzero) {
  SetOfStacks aSetOfStacks;

  EXPECT_EQ(aSetOfStacks.nb_stacks(),0);

  aSetOfStacks.push(1);
  aSetOfStacks.push(2);
  aSetOfStacks.push(3);
  aSetOfStacks.push(4);

  EXPECT_EQ(aSetOfStacks.nb_stacks(),1);

  aSetOfStacks.push(4);
  EXPECT_EQ(aSetOfStacks.nb_stacks(),2);
  aSetOfStacks.push(5);
  aSetOfStacks.push(6);
  aSetOfStacks.push(7);

  EXPECT_EQ(aSetOfStacks.nb_stacks(),2);
  aSetOfStacks.push(8);

  EXPECT_EQ(aSetOfStacks.nb_stacks(),3);
  EXPECT_EQ(aSetOfStacks.pop_data(),8);
  EXPECT_EQ(aSetOfStacks.pop_data(),7);
  EXPECT_EQ(aSetOfStacks.pop_data(),6);
  EXPECT_EQ(aSetOfStacks.pop_data(),5);
  EXPECT_EQ(aSetOfStacks.nb_stacks(),2);


}

}  // namespace dev_exercices
