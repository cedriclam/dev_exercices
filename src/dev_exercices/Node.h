
#ifndef SRC_DEV_EXERCICES_NODE_H_
#define SRC_DEV_EXERCICES_NODE_H_

/** @namespace dev_exercices */
namespace dev_exercices {

class Node{
  public:
    Node(const int& iData);
    virtual ~Node();

    inline int data() { return _data; };
    inline void setData(int iData) { _data = iData;};

    inline Node * next() { return _pNext; };
    inline void setNext(Node* ipNode) { _pNext = ipNode; };

  private:
    int _data;
    Node* _pNext;
};

}  // namespace dev_exercices

#endif  // SRC_DEV_EXERCICES_NODE_H_
