#include "binary_trees.h"
/**
 * binary_tree_preorder - runs through binary tree with pre-order traversal
 * @tree: pointer to the root node of the tree
 * @func: pointer to function to call for node
 * Return: tree or func is NULL, continue
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
