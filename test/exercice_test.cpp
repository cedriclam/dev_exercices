#include <gtest/gtest.h>

#include "dev_exercices/exercice.h"

namespace dev_exercices {

TEST(areAllUnique, isTrue) {
	std::string input = "abcds";
  	EXPECT_TRUE(AreAllUnique(input));
}

TEST(areAllUnique, isFalse) {
	std::string input = "abadd";
  	EXPECT_FALSE(AreAllUnique(input));
}

TEST(areAllUnique, isEmpty) {
	std::string input = "";
  	EXPECT_TRUE(AreAllUnique(input));
}




}  // namespace dev_exercices
