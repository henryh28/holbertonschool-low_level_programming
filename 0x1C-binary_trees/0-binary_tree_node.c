#include "binary_trees.h"

/**
 * binary_tree_node   - Creates a binary tree node
 *
 * @parent:             Pointer to the parent node
 * @value:              Value of the current node
 *
 * Return:              (Success) Pointer to the newly created node
 *                      (Failure) Null
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *current;

	current = malloc(sizeof(binary_tree_t));

	if (current == NULL)
	{
		return (NULL);
	}

	current->parent = parent;
	current->left = NULL;
	current->right = NULL;
	current->n = value;

	return (current);
}
