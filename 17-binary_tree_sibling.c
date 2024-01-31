#include "binary_trees.h"

/**
 * binary_tree_sibling - that finds the sibling of a node
 * @node: pointer to the node to find the sibling
 * Return: node is NULL, your function must return 0
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
if (node == NULL || node->parent == NULL)
return (NULL);

if (node->parent->left == node)
return (node->parent->right);

return (node->parent->left);
}
