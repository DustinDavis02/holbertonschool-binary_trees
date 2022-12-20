#include "binary_trees.h"

/**
 * binary_tree_node - function that creates a binary tree node
 * @parent: pointer to the new parent node
 * @value: value to put in new node
 *
 * Return: pointer to the new node or NULL
 */
 
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new = malloc(sizeof(binary_tree_t));

	if (!new)
		return (NULL);

		new->parent = parent;
		new->left = NULL;
		new->right = NULL;
		new->n = value;

		return (new);
}
