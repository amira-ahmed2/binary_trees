#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child
 * @parent: pointer to the node to insert the left-child in
 * @value: Pointer to the node to print
 * Return: length of printed tree after process
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *newNode;

if (parent == NULL)
return (NULL);

newNode = binary_tree_node(parent, value);

if (newNode == NULL)
return (NULL);

if (parent->right != NULL)
{
newNode->right = parent->right;
parent->right->parent = newNode;
}
parent->right = newNode;

return (newNode);
}
