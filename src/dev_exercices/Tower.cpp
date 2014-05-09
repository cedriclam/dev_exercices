#include "dev_exercices/Tower.h"
#include "dev_exercices/Stack.h"
#include "dev_exercices/Node.h"

#include <cstddef>
#include <iostream>

namespace dev_exercices {

Tower::Tower(int iIndex): _index (iIndex){
}

Tower::~Tower(){
}

int Tower::pop(){
  Node* pNode = _stack.pop();
  if(pNode != NULL){
    int returnValue = pNode->data();
    delete pNode;
    return returnValue;
  }
  return -1;
}

void Tower::push(int iData){
  Node* newNode = new Node(iData);
  _stack.push(newNode);
}

void Tower::moveTopTo(Tower & oTower, int n){
  int disk = pop();
  for (int i = 0; i <= (5-n); ++i){
    std::cout << "--- ";
  }
  std::cout << "((( moveTopTo Tower[" << _index << "] move to Tower[" << oTower.index()
            << "] disk:" << disk << " N:" << n << ")))" <<std::endl;
  oTower.push(disk);

}
void Tower::moveDiscs(int n, Tower & oDest, Tower & oBuffer){
for (int i = 0; i <= (5-n); ++i){
  std::cout << "--- ";
}

std::cout << "moveDiscs Tower[" << _index << "] Dest[" << oDest.index()
          << "] Buffer[" << oBuffer.index()<< "] N:" << n << std::endl;

  if (n > 0){

    moveDiscs(n-1,oBuffer,oDest);
    moveTopTo(oDest,n);
    oBuffer.moveDiscs(n-1,oDest,*this);
  }

}

}  // namespace dev_exercices
