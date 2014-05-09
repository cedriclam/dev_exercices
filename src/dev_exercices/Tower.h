#ifndef SRC_DEV_EXERCICES_TOWER_H_
#define SRC_DEV_EXERCICES_TOWER_H_

#include "dev_exercices/Stack.h"

/** @namespace dev_exercices */
namespace dev_exercices {

class Tower{
  public:
    Tower(int index);
    virtual ~Tower();

    int pop();
    void push(int iData);

    void moveTopTo(Tower & oTower, int n);
    void moveDiscs(int n, Tower & oDest, Tower & oBuffer);

    inline int index() { return _index; };

  private:
    Stack _stack;
    int _index;
};

}  // namespace dev_exercices

#endif  // SRC_DEV_EXERCICES_TOWER_H_
