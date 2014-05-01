#include <gtest/gtest.h>

#include "dev_exercices/exercice.h"

namespace dev_exercices {

TEST(exercice, one) {
	std::string input = "input";
	reverseString(input);
	EXPECT_EQ(input ,"tupni");
}



}  // namespace dev_exercices
