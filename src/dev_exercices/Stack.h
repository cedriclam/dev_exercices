
#ifndef SRC_DEV_EXERCICES_STACK_H_
#define SRC_DEV_EXERCICES_STACK_H_

/** @namespace dev_exercices */
namespace dev_exercices {
class Node;

class Stack{
  public:
    Stack();
    virtual ~Stack();

    Node* pop();
    void push(int iData);

  private:
    Node* _pTop;
};

}  // namespace dev_exercices

#endif  // SRC_DEV_EXERCICES_STACK_H_
