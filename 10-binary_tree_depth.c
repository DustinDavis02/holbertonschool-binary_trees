#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of node
 * @tree: pointer to node to measure
 * Return: 0, or depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL || tree->parent == NULL)
		return (depth);

	depth = binary_tree_depth(tree->parent) + 1;

	return (depth);
}
