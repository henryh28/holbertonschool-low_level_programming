#include "binary_trees.h"

/**
 * binary_tree_sibling  - Finds the sibling of @node in a binary tree
 *
 * @node:                 Node for which to find the sibling
 *
 * Return:                (NULL) @node, its parent are NULL, or no sibling
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
	{
		return (NULL);
	}

	return (node->parent->left == node ? node->parent->right :
		node->parent->left);
}
