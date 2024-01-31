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
		size_t left = 0;
		size_t right = 0;

		left = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		right = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((left > right) ? left : right);
	}
	return (0);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to traverse
 * Return: tree is NULL, your function must return 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));

	return (0);
}
