
#ifndef SRC_DEV_EXERCICES_EXERCICE_H_
#define SRC_DEV_EXERCICES_EXERCICE_H_


/** @namespace dev_exercices */
namespace dev_exercices {
class Node;

/**
 * @brief remove a Node in a linked list
 *
 * @param [in] ipNode pointer to a Node
 *
 * @return the pointer to next Node linked in the removed Node
 */
Node* removeNode(Node *ipNode);
/**
 * @brief remove all duplicate Node in a Linked list
 *
 * @param [in] ipNodeHead pointer to a Node
 *
 */
void removeDuplicate(Node *ipNodeHead);

}  // namespace dev_exercices

#endif  // SRC_DEV_EXERCICES_EXERCICE_H_
