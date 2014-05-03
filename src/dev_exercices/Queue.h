
#ifndef SRC_DEV_EXERCICES_QUEUE_H_
#define SRC_DEV_EXERCICES_QUEUE_H_

/** @namespace dev_exercices */
namespace dev_exercices {
class Node;

class Queue{
  public:
    Queue();
    virtual ~Queue();

    void enqueue(int iObj);
    Node* dequeue();

  private:
    Node* _pHead;
    Node* _pTail;
};

}  // namespace dev_exercices

#endif  // SRC_DEV_EXERCICES_QUEUE_H_
