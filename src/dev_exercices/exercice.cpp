#include "dev_exercices/exercice.h"
#include "dev_exercices/Node.h"

#include <cstddef>

namespace dev_exercices {

Node* findNodeByIndex(Node *ipNodeHead, int index){
  if (ipNodeHead == NULL){
    return NULL;
  }

  int i = 0; //counter for index
  Node* pCurentNode = ipNodeHead;

  while(pCurentNode != NULL && i < (index)){
    if (pCurentNode->next() != NULL){
      ++i;
      pCurentNode = pCurentNode->next();
    } else{
      return NULL;
    }
  }

  return pCurentNode;
}


Node* findNodeByReverseIndex(Node *ipNodeHead, int index){
  if (ipNodeHead == NULL){
    return NULL;
  }

  int counter = 0;
  Node* pCurentNode = ipNodeHead;
  Node* pNodeToReturn = pCurentNode;

  while(pCurentNode != NULL){
    if (counter <= index){
      ++counter;
    }
    else
    {
      // when the counter is equal to the index, we can start to set
      // the return pointer.
      pNodeToReturn = pNodeToReturn->next();
    }

    pCurentNode = pCurentNode->next();
  }

  // in case of index bigger than the linked list size, return null
  if (counter <= index){
    return NULL;
  }

  return pNodeToReturn;
}

}  // namespace dev_exercices
