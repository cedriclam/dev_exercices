#include "dev_exercices/Stack.h"
#include "dev_exercices/Node.h"

#include <cstddef>

namespace dev_exercices {

Stack::Stack(): _pTop (NULL){
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
    return output;
  }
  return NULL;
}

void Stack::push(int iData){
  Node* newNode = new Node(iData);
  newNode->setNext(_pTop);
  _pTop = newNode;
}

}  // namespace dev_exercices
