#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to traverse
 * Return: tree is NULL, your function must return 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
if (tree)
{
size_t nLeft = 0, nRight = 0;

nLeft = tree->left ? nLeft + binary_tree_height(tree->left) : 0;
nRight = tree->right ? nRight + binary_tree_height(tree->right) : 0;
return ((nLeft > nRight) ? nLeft : nRight);
}
return (0);
}
