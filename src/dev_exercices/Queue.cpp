#include "dev_exercices/Queue.h"
#include "dev_exercices/Node.h"

#include <cstddef>

namespace dev_exercices {

Queue::Queue(): _pHead (NULL), _pTail (NULL){
}

Queue::~Queue(){
  _pTail = NULL;
  if (_pHead != NULL){
    delete _pHead;
  }
}

void Queue::enqueue(int iData){
  if (_pHead == NULL){
    _pTail = new Node(iData,iData);
    _pHead = _pTail;
  } else {
    _pTail->setNext(new Node(iData,iData));
    _pTail = _pTail->next();
  }
}

Node* Queue::dequeue(){

  if(_pHead != NULL){
    Node* output = _pHead;
    _pHead = _pHead->next();
    return output;
  }
  return NULL;
}

}  // namespace dev_exercices
