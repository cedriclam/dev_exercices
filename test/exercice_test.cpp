#include <gtest/gtest.h>

#include "dev_exercices/exercice.h"
#include "dev_exercices/Node.h"

#include <cstddef>

namespace dev_exercices {

TEST(removeNode, deleteNodeNull) {

  Node* pNewNode = new Node(6);

  EXPECT_TRUE(removeNode(pNewNode) == NULL);
}

TEST(removeNode, deleteNodeWithNext) {

  Node* pNewNode = new Node(4);
  Node* pNewNode2 = new Node(2);
  pNewNode->setNext(pNewNode2);

  pNewNode = removeNode(pNewNode);
  EXPECT_TRUE(pNewNode != NULL);
  EXPECT_EQ(pNewNode->data() , 2);

  delete pNewNode;
}

TEST(removeDuplicate, noDuplicate) {

  Node* pNewNode = new Node(4);
  Node* pNewNode2 = new Node(2);
  Node* pNewNode3 = new Node(1);
  Node* pNewNode4 = new Node(0);

  pNewNode->setNext(pNewNode2);
  pNewNode2->setNext(pNewNode3);
  pNewNode3->setNext(pNewNode4);

  removeDuplicate(pNewNode);

  EXPECT_TRUE(pNewNode != NULL);
  EXPECT_TRUE(pNewNode->next() != NULL);
  EXPECT_TRUE(pNewNode->next()->next() != NULL);
  EXPECT_TRUE(pNewNode->next()->next()->next() != NULL);
  EXPECT_TRUE(pNewNode->next()->next()->next()->next() == NULL);

  EXPECT_EQ(pNewNode->data(),4);
  EXPECT_EQ(pNewNode->next()->data(),2);
  EXPECT_EQ(pNewNode->next()->next()->data(), 1);
  EXPECT_EQ(pNewNode->next()->next()->next()->data() , 0);

  delete pNewNode;
}

TEST(removeDuplicate, oneDuplicate) {

  Node* pNewNode = new Node(4);
  Node* pNewNode2 = new Node(2);
  Node* pNewNode3 = new Node(2);
  Node* pNewNode4 = new Node(0);

  pNewNode->setNext(pNewNode2);
  pNewNode2->setNext(pNewNode3);
  pNewNode3->setNext(pNewNode4);

  removeDuplicate(pNewNode);

  EXPECT_TRUE(pNewNode != NULL);
  EXPECT_TRUE(pNewNode->next() != NULL);
  EXPECT_TRUE(pNewNode->next()->next() != NULL);
  EXPECT_TRUE(pNewNode->next()->next()->next() == NULL);

  EXPECT_EQ(pNewNode->data(),4);
  EXPECT_EQ(pNewNode->next()->data(),2);
  EXPECT_EQ(pNewNode->next()->next()->data(), 0);

  delete pNewNode;
}


TEST(removeDuplicate, twoDuplicateSameValue) {

  Node* pNewNode = new Node(4);
  Node* pNewNode2 = new Node(2);
  Node* pNewNode3 = new Node(4);
  Node* pNewNode4 = new Node(4);

  pNewNode->setNext(pNewNode2);
  pNewNode2->setNext(pNewNode3);
  pNewNode3->setNext(pNewNode4);

  removeDuplicate(pNewNode);

  EXPECT_TRUE(pNewNode != NULL);
  EXPECT_EQ(pNewNode->data(),4);
  EXPECT_TRUE(pNewNode->next() != NULL);
  EXPECT_EQ(pNewNode->next()->data(),2);
  EXPECT_TRUE(pNewNode->next()->next() == NULL);



  delete pNewNode;
}

TEST(removeDuplicate, twoDuplicateDifferentValues) {

  Node* pNewNode = new Node(4);
  Node* pNewNode2 = new Node(2);
  Node* pNewNode3 = new Node(2);
  Node* pNewNode4 = new Node(4);

  pNewNode->setNext(pNewNode2);
  pNewNode2->setNext(pNewNode3);
  pNewNode3->setNext(pNewNode4);

  removeDuplicate(pNewNode);

  EXPECT_TRUE(pNewNode != NULL);
  EXPECT_EQ(pNewNode->data(),4);
  EXPECT_TRUE(pNewNode->next() != NULL);
  EXPECT_EQ(pNewNode->next()->data(),2);
  EXPECT_TRUE(pNewNode->next()->next() == NULL);



  delete pNewNode;
}


}  // namespace dev_exercices
