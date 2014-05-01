#include <gtest/gtest.h>

#include "dev_exercices/exercice.h"

namespace dev_exercices {

TEST(exercice, emptyString) {
  EXPECT_TRUE(areAnagram("",""));
}

TEST(exercice, notSameSize) {
  EXPECT_FALSE(areAnagram("abcd","abc"));
}

TEST(exercice, sameSizeNotSameChar) {
  EXPECT_FALSE(areAnagram("abcd","abce"));
}

TEST(exercice, areAnagram) {
  EXPECT_TRUE(areAnagram("abcd","dbac"));
}


TEST(exercice, areAnagram2) {
  EXPECT_TRUE(areAnagram("abcd","dbca"));
}

}  // namespace dev_exercices
