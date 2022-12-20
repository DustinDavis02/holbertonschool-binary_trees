#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: pointer to node to insert left-child in
 * @value: value to store in new node
 *
 * Return: a pointer to the created node, or NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;
	int aux;

	if (parent == NULL)
	return (NULL);

	new = binary_tree_node(parent, value);

	if (new != NULL)
	{
		if (parent->left != NULL)
		{
			aux = parent->left->n;
			parent->left->n = value;
			parent->left->left = new;
			new->n = aux;
			new->parent = parent->left;
			return (new);
		}

		parent->left = new;
		return (new);
	}
	return (NULL);
}
