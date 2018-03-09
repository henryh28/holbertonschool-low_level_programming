#include "binary_trees.h"

/**
 * binary_tree_insert_left   - Insert a node as left child of @parent
 *
 * @parent:                    Parent node of current node
 * @value:                     Value of current node
 *
 * Return:                     (Success) Pointer to newly created node
 *                             (Failure) Null
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *current;

	if (!parent)
	{
		return (NULL);
	}

	current = binary_tree_node(parent, value);

	if (parent->left)
	{
		current->left = parent->left;
		current->left->parent = current;
	}

	parent->left = current;

	return (current);
}
