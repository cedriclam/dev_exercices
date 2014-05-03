#include "dev_exercices/exercice.h"
#include "dev_exercices/Node.h"
#include <cstddef>

namespace dev_exercices {

Node* removeNode(Node *ipNode){
  if (ipNode == NULL){
    return NULL;
  }

  Node* pNodeDelete = ipNode;
  Node* pNodeToReturn = ipNode->next();
  ipNode->setNext(NULL);
  if (pNodeDelete){
    delete pNodeDelete;
  }

  return pNodeToReturn;
}

void removeDuplicate(Node *ipNodeHead){
  if (ipNodeHead == NULL){
    return;
  }

  Node* pCurentNode = ipNodeHead;
  Node* pNextNode = NULL;
  Node* pCheckNode = NULL;

  while(pCurentNode != NULL){
    pCheckNode = pCurentNode;
    pNextNode = pCurentNode->next();

    while(pNextNode != NULL){
      if (pCurentNode->data() == pNextNode->data()){
        pCheckNode->setNext(removeNode(pNextNode));
        pNextNode = pCheckNode->next();
      }
      else {
        pCheckNode = pNextNode;
        pNextNode = pCheckNode->next();
      }

    }

    pCurentNode = pCurentNode->next();
  }

}

}  // namespace dev_exercices
