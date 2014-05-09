#include "dev_exercices/MyQueue.h"
#include "dev_exercices/Node.h"

#include <cstddef>

namespace dev_exercices {

MyQueue::MyQueue(){
}

MyQueue::~MyQueue(){

}

void MyQueue::enqueue(int iData){
  _stackPush.push(iData);
}

int MyQueue::dequeue(){
  if (_stackPop.size() == 0)
  {
    while (_stackPush.size() > 0){
      _stackPop.push(_stackPush.pop());
    }
  }

  return _stackPop.pop();
}

}  // namespace dev_exercices
