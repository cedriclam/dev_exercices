#include <gtest/gtest.h>

#include "dev_exercices/exercice.h"
#include "dev_exercices/Node.h"

#include <cstddef>

namespace dev_exercices {

TEST(removeThisNode, nullNode) {

  EXPECT_NO_THROW(removeThisNode(NULL));

}

TEST(removeThisNode, removeOK) {

  Node* pNewNode = new Node(4);
  Node* pNewNode2 = new Node(2);
  Node* pNewNode3 = new Node(1);
  Node* pNewNode4 = new Node(0);

  pNewNode->setNext(pNewNode2);
  pNewNode2->setNext(pNewNode3);
  pNewNode3->setNext(pNewNode4);

  removeThisNode(pNewNode2);

  EXPECT_TRUE(pNewNode->next() != NULL);
  EXPECT_EQ(pNewNode->next()->data() , 1);

  delete pNewNode;
}

TEST(removeThisNode, theNodeIsTheTail) {

  Node* pNewNode = new Node(4);
  Node* pNewNode2 = new Node(2);
  Node* pNewNode3 = new Node(1);
  Node* pNewNode4 = new Node(0);

  pNewNode->setNext(pNewNode2);
  pNewNode2->setNext(pNewNode3);
  pNewNode3->setNext(pNewNode4);

  EXPECT_ANY_THROW(removeThisNode(pNewNode4));

  delete pNewNode;
}


}  // namespace dev_exercices
