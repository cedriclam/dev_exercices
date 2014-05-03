#include <gtest/gtest.h>

#include "dev_exercices/exercice.h"
#include "dev_exercices/Node.h"

#include <cstddef>

namespace dev_exercices {

TEST(findNodeByIndex, withIndex0) {

  Node* pNewNode = new Node(4);
  Node* pNewNode2 = new Node(2);
  pNewNode->setNext(pNewNode2);

  Node* pResultNode = findNodeByIndex(pNewNode,0);
  EXPECT_TRUE(pResultNode != NULL);
  EXPECT_EQ(pResultNode->data() , 4);

  delete pNewNode;
}

TEST(findNodeByIndex, withIndex2) {

  Node* pNewNode = new Node(4);
  Node* pNewNode2 = new Node(2);
  Node* pNewNode3 = new Node(1);
  Node* pNewNode4 = new Node(0);

  pNewNode->setNext(pNewNode2);
  pNewNode2->setNext(pNewNode3);
  pNewNode3->setNext(pNewNode4);

  Node* pResultNode = findNodeByIndex(pNewNode,2);
  EXPECT_TRUE(pResultNode != NULL);
  EXPECT_EQ(pResultNode->data() , 1);

  delete pNewNode;
}

TEST(findNodeByIndex, indexToBig) {

  Node* pNewNode = new Node(4);
  Node* pNewNode2 = new Node(2);
  pNewNode->setNext(pNewNode2);

  Node* pResultNode = findNodeByIndex(pNewNode,6);
  EXPECT_TRUE(pResultNode == NULL);

  delete pNewNode;
}


TEST(findNodeByReverseIndex, withIndex0) {

  Node* pNewNode = new Node(4);
  Node* pNewNode2 = new Node(2);
  pNewNode->setNext(pNewNode2);

  Node* pResultNode = findNodeByReverseIndex(pNewNode,0);
  EXPECT_TRUE(pResultNode != NULL);
  EXPECT_EQ(pResultNode->data() , 2);

  delete pNewNode;
}

TEST(findNodeByReverseIndex, withIndex2) {

  Node* pNewNode = new Node(4);
  Node* pNewNode2 = new Node(2);
  Node* pNewNode3 = new Node(1);
  Node* pNewNode4 = new Node(0);

  pNewNode->setNext(pNewNode2);
  pNewNode2->setNext(pNewNode3);
  pNewNode3->setNext(pNewNode4);

  Node* pResultNode = findNodeByReverseIndex(pNewNode,1);
  EXPECT_TRUE(pResultNode != NULL);
  EXPECT_EQ(pResultNode->data() , 1);

  delete pNewNode;
}

TEST(findNodeByReverseIndex, indexToBig) {

  Node* pNewNode = new Node(4);
  Node* pNewNode2 = new Node(2);
  pNewNode->setNext(pNewNode2);

  Node* pResultNode = findNodeByReverseIndex(pNewNode,6);
  EXPECT_TRUE(pResultNode == NULL);

  delete pNewNode;
}


}  // namespace dev_exercices
