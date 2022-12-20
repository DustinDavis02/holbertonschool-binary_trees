#include "binary_trees.h"

/**
 * binary_tree_height - Measures height of binary tree
 * @tree: node to measure
 * Return: 0 if NULL, otherwise the distance
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		count = 1 + binary_tree_height(tree->left);
	if (tree->right != NULL)
		count = 1 + binary_tree_height(tree->right);

	return (count);
}
