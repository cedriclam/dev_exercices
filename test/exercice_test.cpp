#include <gtest/gtest.h>

#include "dev_exercices/exercice.h"

namespace dev_exercices {

TEST(square, seven) {
  EXPECT_EQ(49, square(7));
}

TEST(factorial, ten) {
  EXPECT_EQ(3628800, factorial(10));
}


}  // namespace dev_exercices
