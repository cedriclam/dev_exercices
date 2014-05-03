#include "dev_exercices/Node.h"

#include <cstddef>

namespace dev_exercices {

Node::Node(const int& iData): _data (iData), _pNext (NULL){
}

Node::~Node(){
  if (_pNext != NULL){
    delete _pNext;
  }
}

}  // namespace dev_exercices
