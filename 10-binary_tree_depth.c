#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of node
 * @tree: pointer to node to measure
 * Return: 0, or depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int count = 0;

	if (tree == NULL)
		return (0);

	while (tree->parent != NULL)
	{
		count++;
		tree = tree->parent;
	}

	return (count);
}
