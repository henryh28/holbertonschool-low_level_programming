#include "binary_trees.h"

/**
 * binary_tree_insert_right  - Insert a node as right child of @parent
 *
 * @parent:                    Parent node of current node
 * @value:                     Value of current node
 *
 * Return:                     (Success) Pointer to newly created node
 *                             (Failure) Null
 */


binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *current;

	if (!parent)
	{
		return (NULL);
	}

	current = binary_tree_node(parent, value);

	if (parent->right)
	{
		current->right = parent->right;
		current->right->parent = current;
	}

	parent->right = current;

	return (current);
}
