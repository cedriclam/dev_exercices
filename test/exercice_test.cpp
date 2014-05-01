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

// same test with the seconde version
TEST(areAllUniqueV2, isTrue) {
	std::string input = "abcds";
  	EXPECT_TRUE(AreAllUniqueV2(input));
}

TEST(areAllUniqueV2, isFalse) {
	std::string input = "abadd";
  	EXPECT_FALSE(AreAllUniqueV2(input));
}

TEST(areAllUniqueV2, isEmpty) {
	std::string input = "";
  	EXPECT_TRUE(AreAllUniqueV2(input));
}


}  // namespace dev_exercices
