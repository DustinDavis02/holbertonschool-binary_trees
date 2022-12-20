#include "binary_trees.h"

/**
 * binary_tree_leaves - counts number of NULL nodes
 * @tree: current node of tree
 * Return: 0 if NULL, otherwise number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	else if (tree->left == NULL && tree->right == NULL)
		return (1);
	else
		return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
