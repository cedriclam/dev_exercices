
#ifndef SRC_DEV_EXERCICES_SETOFSTACKS_H_
#define SRC_DEV_EXERCICES_SETOFSTACKS_H_

#include <list>

#include "dev_exercices/Stack.h"

/** @namespace dev_exercices */
namespace dev_exercices {
class Node;

class SetOfStacks{
  public:
    SetOfStacks();
    virtual ~SetOfStacks();

    void push(int iData);
    void push(Node* ipNode);
    Node* pop();
    int pop_data();

    int popAt(int index);

    inline int nb_stacks() { return _stacks.size(); };

  private:
    std::list<Stack* > _stacks;
};

}  // namespace dev_exercices

#endif  // SRC_DEV_EXERCICES_SETOFSTACKS_H_
