#include "dev_exercices/exercice.h"
#include "dev_exercices/Node.h"

#include <cstddef>

namespace dev_exercices {


void removeThisNode(Node *ipNode){
  if (ipNode == NULL){
    return;
  }

  // the ipNode is the tail of the linked list
  // this should not append
  if(ipNode->next() == NULL){
    throw new isNodeisTailException;
  }


  Node* currentNextNode = ipNode->next();
  // set the next node data to the current node
  ipNode->setData(currentNextNode->data());
  // set the next next node to the current node
  ipNode->setNext(currentNextNode->next());

  // remove link between currentNextNode and his next Node
  currentNextNode->setNext(NULL);
  // delete the currentNextNode
  delete currentNextNode;

  return;
}

}  // namespace dev_exercices
