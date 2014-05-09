#include "dev_exercices/Stack.h"
#include "dev_exercices/Node.h"

#include <cstddef>

namespace dev_exercices {

Stack::Stack(): _pTop (NULL), _size (0){
}

Stack::~Stack(){
  if (_pTop != NULL){
    delete _pTop;
  }
}

Node* Stack::pop(){
  if(_pTop != NULL){
    Node* output = _pTop;
    _pTop = _pTop->next();
    output->setNext(NULL);

    --_size;

    return output;
  }
  return NULL;
}

void Stack::push(Node* ipNode){
  ipNode->setNext(_pTop);
  _pTop = ipNode;

  ++_size;
}

void Stack::push(int iData){
  Node* newNode = new Node(iData);
  push(newNode);
}

}  // namespace dev_exercices
