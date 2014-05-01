#include <gtest/gtest.h>

#include "dev_exercices/exercice.h"

namespace dev_exercices {

TEST(exercice, emptyString) {
  std::string input = "";
  removeDuplicate(input);
  EXPECT_EQ(input, "");
}

TEST(exercice, noDuplication) {
  std::string input = "abcdefgh";
  removeDuplicate(input);
  EXPECT_EQ(input, "abcdefgh");
}

TEST(exercice, someDuplication) {
  std::string input = "ababcdb";
  removeDuplicate(input);
  EXPECT_EQ(input, "abcd");
}

}  // namespace dev_exercices
