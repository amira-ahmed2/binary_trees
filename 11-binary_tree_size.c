#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to the root node of the tree to traverse
 * Return: tree is NULL, your function must return 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
size_t size_tree = 0;
  
if (tree)
{
size_tree += 1;
size_tree += binary_tree_size(tree->left);
size_tree += binary_tree_size(tree->right);
}
return (size_tree);
}
