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

// test V2
TEST(exerciceV2, emptyString) {
  EXPECT_TRUE(areAnagramV2("",""));
}

TEST(exerciceV2, notSameSize) {
  EXPECT_FALSE(areAnagramV2("abcd","abc"));
}

TEST(exerciceV2, sameSizeNotSameChar) {
  EXPECT_FALSE(areAnagramV2("abcd","abce"));
}

TEST(exerciceV2, areAnagram) {
  EXPECT_TRUE(areAnagramV2("abcd","dbac"));
}


TEST(exerciceV2, areAnagram2) {
  EXPECT_TRUE(areAnagramV2("abcd","dbca"));
}

}  // namespace dev_exercices
