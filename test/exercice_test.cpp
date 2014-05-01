#include <gtest/gtest.h>

#include "dev_exercices/exercice.h"

namespace dev_exercices {

TEST(exercice, emptyString) {
  std::string input;
  replaceSpaceChar(input);
  EXPECT_EQ(input,"");

}

TEST(exercice, noSpaceChar) {
  std::string input = "thisisatestwithoutspace";
  replaceSpaceChar(input);
  EXPECT_EQ(input,"thisisatestwithoutspace");

}

TEST(exercice, someSpace) {
  std::string input = "this is a test without space";
  replaceSpaceChar(input);
  EXPECT_EQ(input,"this%20is%20a%20test%20without%20space");

}

}  // namespace dev_exercices
