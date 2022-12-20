#include "binary_trees.h"

/**
 * binary_tree_is_root - determine if node is a root
 * @node: node to be checked
 * Return: 1 if root, 0 if anything else
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);
	else
		return (1);
}
