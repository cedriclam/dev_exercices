#include <gtest/gtest.h>

#include "dev_exercices/exercice.h"
#include "dev_exercices/Node.h"
#include "dev_exercices/Tower.h"

#include <cstddef>

namespace dev_exercices {

TEST(Tower, 5Disks) {

  int n = 5;

  Tower aTower1(1);
  Tower aTower2(2);
  Tower aTower3(3);

  for (int i = n; i > 0; --i){
    aTower1.push(i);
  }

  aTower1.moveDiscs(n,aTower3,aTower2);

  EXPECT_EQ(aTower3.pop(),1);
  EXPECT_EQ(aTower3.pop(),2);
  EXPECT_EQ(aTower3.pop(),3);
  EXPECT_EQ(aTower3.pop(),4);
  EXPECT_EQ(aTower3.pop(),5);

  EXPECT_EQ(aTower3.pop(),-1);
  EXPECT_EQ(aTower2.pop(),-1);
  EXPECT_EQ(aTower1.pop(),-1);
}

}  // namespace dev_exercices
