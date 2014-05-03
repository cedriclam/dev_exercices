#include <gtest/gtest.h>

#include "dev_exercices/exercice.h"
#include "dev_exercices/Node.h"

#include <cstddef>

namespace dev_exercices {

TEST(addition, zeroAndzero) {

  Node* pNodeNb1 = new Node(0);
  Node* pNodeNb2 = new Node(0);

  Node* pResult = addition(pNodeNb1,pNodeNb2);

  EXPECT_TRUE(pResult != NULL);
  EXPECT_EQ(pResult->data() , 0);

  delete pNodeNb1;
  delete pNodeNb2;
  delete pResult;
}

TEST(addition, oneAndtwo) {

  Node* pNodeNb1 = new Node(1);
  Node* pNodeNb2 = new Node(2);

  Node* pResult = addition(pNodeNb1,pNodeNb2);

  EXPECT_TRUE(pResult != NULL);
  EXPECT_EQ(pResult->data() , 3);

  delete pNodeNb1;
  delete pNodeNb2;
  delete pResult;
}

TEST(addition, oneAndtwo_) {

  Node* pNodeNb1_1 = new Node(3);
  Node* pNodeNb1_2 = new Node(1);
  Node* pNodeNb1_3 = new Node(5);

  pNodeNb1_1->setNext(pNodeNb1_2);
  pNodeNb1_2->setNext(pNodeNb1_3);

  Node* pNodeNb2_1 = new Node(5);
  Node* pNodeNb2_2 = new Node(9);
  Node* pNodeNb2_3 = new Node(2);

  pNodeNb2_1->setNext(pNodeNb2_2);
  pNodeNb2_2->setNext(pNodeNb2_3);

  Node* pResult = addition(pNodeNb1_1,pNodeNb2_1);

  EXPECT_TRUE(pResult != NULL);
  EXPECT_EQ(pResult->data() , 8);
  EXPECT_TRUE(pResult->next() != NULL);
  EXPECT_EQ(pResult->next()->data() , 0);
  EXPECT_TRUE(pResult->next()->next() != NULL);
  EXPECT_EQ(pResult->next()->next()->data() , 8);


  delete pNodeNb1_1;
  delete pNodeNb2_1;
  delete pResult;
}

TEST(addition, numberNotSameSize) {

  Node* pNodeNb1_1 = new Node(3);
  Node* pNodeNb1_2 = new Node(1);
  Node* pNodeNb1_3 = new Node(5);

  pNodeNb1_1->setNext(pNodeNb1_2);
  pNodeNb1_2->setNext(pNodeNb1_3);

  Node* pNodeNb2_1 = new Node(5);
  Node* pNodeNb2_2 = new Node(9);
  Node* pNodeNb2_3 = new Node(2);
  Node* pNodeNb2_4 = new Node(6);

  pNodeNb2_1->setNext(pNodeNb2_2);
  pNodeNb2_2->setNext(pNodeNb2_3);
  pNodeNb2_3->setNext(pNodeNb2_4);

  Node* pResult = addition(pNodeNb1_1,pNodeNb2_1);

  EXPECT_TRUE(pResult != NULL);
  EXPECT_EQ(pResult->data() , 8);
  EXPECT_TRUE(pResult->next() != NULL);
  EXPECT_EQ(pResult->next()->data() , 0);
  EXPECT_TRUE(pResult->next()->next() != NULL);
  EXPECT_EQ(pResult->next()->next()->data() , 8);
  EXPECT_TRUE(pResult->next()->next()->next() != NULL);
  EXPECT_EQ(pResult->next()->next()->next()->data() , 6);


  delete pNodeNb1_1;
  delete pNodeNb2_1;
  delete pResult;
}

}  // namespace dev_exercices
