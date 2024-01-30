#include "binary_trees.h"

/**
 * binary_tree_is_root - that checks if a given node is a root
 * @node: pointer to the node to check
 * Return: if node is a leaf - 1.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);

	return (1);
}
