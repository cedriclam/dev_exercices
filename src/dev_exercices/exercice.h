
#ifndef SRC_DEV_EXERCICES_EXERCICE_H_
#define SRC_DEV_EXERCICES_EXERCICE_H_

#include <exception>

/** @namespace dev_exercices */
namespace dev_exercices {
class Node;

struct isNodeisTailException : std::exception {
  const char* what() const noexcept {return "The Node is the tail!\n";}
};

/**
 * @brief remove a specific Node in a linked linked list
 * Node should be in the middle of the list (not the tail)
 *
 * @param [in] ipNode pointer to a Node
 *
 * @assert if the Node is the tail of the linked list
 */
void removeThisNode(Node *ipNode);



}  // namespace dev_exercices

#endif  // SRC_DEV_EXERCICES_EXERCICE_H_
