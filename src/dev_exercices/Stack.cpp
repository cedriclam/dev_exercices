#include "dev_exercices/Stack.h"
#include "dev_exercices/Node.h"

#include <cstddef>

namespace dev_exercices {

Stack::Stack(): _pTop (NULL), _size(0){
}

Stack::~Stack(){
  if (_pTop != NULL){
    delete _pTop;
  }
}

int Stack::pop(){
  if(_pTop != NULL){
    Node* output = _pTop;
    _pTop = _pTop->next();
    output->setNext(NULL);
    int outputValue = output->data();
    delete output;
    --_size;

    return outputValue;
  }
  return -1;
}

void Stack::push(int iData){
  Node* newNode = new Node(iData);
  newNode->setNext(_pTop);
  _pTop = newNode;
  ++_size;
}

}  // namespace dev_exercices
