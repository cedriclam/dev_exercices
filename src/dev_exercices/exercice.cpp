#include "dev_exercices/exercice.h"
#include "dev_exercices/Node.h"

#include <cstddef>

namespace dev_exercices {

Node* addition(Node *ipNodeA,Node *ipNodeB){
  Node* pNbA = ipNodeA;
  Node* pNbB = ipNodeB;

  Node* pResultHead = new Node(0);
  int deducation = 0;
  Node* pNodeResult = pResultHead;

  while((pNbA != NULL) || (pNbB != NULL)){
    int sum = deducation;
    if (pNbA != NULL){
      sum += pNbA->data();
      pNbA = pNbA->next();
    }

    if (pNbB != NULL){
      sum += pNbB->data();
      pNbB = pNbB->next();
    }

    if (sum > 9){
      deducation = 1;
    } else {
      deducation = 0;
    }

    pNodeResult->setData(sum % 10);
    pNodeResult->setNext(new Node(0));
    pNodeResult = pNodeResult->next();
  }


  return pResultHead;
}


}  // namespace dev_exercices
