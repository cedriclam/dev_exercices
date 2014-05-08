#include "dev_exercices/Node.h"

#include <cstddef>

namespace dev_exercices {

Node::Node(const int& iData, int iMin)
: _data (iData), _min (iMin), _pNext (NULL){
}

Node::~Node(){
  if (_pNext != NULL){
    delete _pNext;
  }
}

}  // namespace dev_exercices
