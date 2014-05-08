#include "dev_exercices/SetOfStacks.h"
#include "dev_exercices/Stack.h"
#include "dev_exercices/Node.h"

#include <cstddef>
#include <iostream>

namespace dev_exercices {

SetOfStacks::SetOfStacks() {
}


SetOfStacks::~SetOfStacks() {
  for (auto pStack : _stacks){
    delete pStack;
  }
}

void SetOfStacks::push(int iData){
  push(new Node(iData));
}

void SetOfStacks::push(Node* ipNode)
{
  if (_stacks.empty()
   || (_stacks.front()->size() == STACK_MAX_SIZE) ){
    _stacks.push_front(new Stack());
  }

  _stacks.front()->push(ipNode);
}

Node* SetOfStacks::pop(){
  if (_stacks.empty()){
    return NULL;
  }

  if (_stacks.front()->size() > 0){
    return _stacks.front()->pop();
  }

  Stack* pStackToDel = _stacks.front();
  delete pStackToDel;
  _stacks.pop_front();

  if (!_stacks.empty()){
    return _stacks.front()->pop();
  }

  return NULL;

}

int SetOfStacks::pop_data(){
  Node* pNode = pop();
  if (pNode != NULL){
    int returnValue = pNode->data();
    pNode->setNext(NULL);
    delete pNode;

    return returnValue;
  }

  return -1;
}


}
