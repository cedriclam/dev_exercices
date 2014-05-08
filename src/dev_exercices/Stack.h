
#ifndef SRC_DEV_EXERCICES_STACK_H_
#define SRC_DEV_EXERCICES_STACK_H_

#define STACK_MAX_SIZE 4

/** @namespace dev_exercices */
namespace dev_exercices {
class Node;

class Stack{
  public:
    Stack();
    virtual ~Stack();

    Node* pop();
    void push(int iData);
    void push(Node* ipNode);

    inline int size() { return _size; };

  private:
    Node* _pTop;
    int _size;
};

}  // namespace dev_exercices

#endif  // SRC_DEV_EXERCICES_STACK_H_
