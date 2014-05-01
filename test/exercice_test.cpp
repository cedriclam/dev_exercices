#include <gtest/gtest.h>

#include "dev_exercices/exercice.h"

namespace dev_exercices {

TEST(areAllUnique, isTrue) {
	std::string input = "abcds";
  	EXPECT_TRUE(AreAllUnique(input));
}




}  // namespace dev_exercices
