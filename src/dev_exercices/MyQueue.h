
#ifndef SRC_DEV_EXERCICES_MYQUEUE_H_
#define SRC_DEV_EXERCICES_MYQUEUE_H_

#include "dev_exercices/Stack.h"

/** @namespace dev_exercices */
namespace dev_exercices {

class MyQueue{
  public:
    MyQueue();
    virtual ~MyQueue();

    void enqueue(int iObj);
    int dequeue();

  private:
    Stack _stackPush;
    Stack _stackPop;
};

}  // namespace dev_exercices

#endif  // SRC_DEV_EXERCICES_MYQUEUE_H_
