#include "dev_exercices/Stack.h"
#include "dev_exercices/Node.h"

#include <cstddef>

#include <limits>

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
  Node* newNode = new Node(iData,iData);

  if ((_pTop != NULL) && ( _pTop->min() < iData)){
    newNode->setMin(_pTop->min());
  }

  newNode->setNext(_pTop);
  _pTop = newNode;
}

int Stack::min(){
  if(_pTop != NULL){
    return _pTop->min();
  }
  return std::numeric_limits<int>::min();
}

}  // namespace dev_exercices
