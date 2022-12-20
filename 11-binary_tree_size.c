#include "binary_trees.h"
/**
 * binary_tree_size - measures the size of tree
 * @tree: pointer to root node of tree to measure size
 * Return: 0 if NULL
 */
 
size_t binary_tree_size(const binary_tree_t *tree)
{
	int right_node = 0;
	int left_node = 0;

	if (tree != NULL)
	{
		left_node = binary_tree_size(tree->left);
		right_node = binary_tree_size(tree->right);
		return (right_node + left_node + 1);
	}
	return (0);
}
