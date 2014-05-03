
#ifndef SRC_DEV_EXERCICES_EXERCICE_H_
#define SRC_DEV_EXERCICES_EXERCICE_H_


/** @namespace dev_exercices */
namespace dev_exercices {
class Node;

/**
 * @brief return a pointer to the nth Node in a linked list
 *
 * @param [in] ipNode pointer to a Node
 *
 * @return the pointer to nth Node in linked list
 */
Node* findNodeByIndex(Node *ipNodeHead, int index);

/**
 * @brief return a pointer to the nth Node from the end of a linked list
 *
 * @param [in] ipNode pointer to a Node
 *
 * @return the pointer to nth Node from the end of a linked list
 */
Node* findNodeByReverseIndex(Node *ipNodeHead, int index);


}  // namespace dev_exercices

#endif  // SRC_DEV_EXERCICES_EXERCICE_H_
