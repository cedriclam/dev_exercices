
#ifndef SRC_DEV_EXERCICES_STACK_H_
#define SRC_DEV_EXERCICES_STACK_H_

/** @namespace dev_exercices */
namespace dev_exercices {
class Node;

class Stack{
  public:
    Stack();
    virtual ~Stack();

    int pop();
    void push(int iData);

    inline int size() { return _size;};

  private:
    Node* _pTop;
    int _size;
};

}  // namespace dev_exercices

#endif  // SRC_DEV_EXERCICES_STACK_H_
