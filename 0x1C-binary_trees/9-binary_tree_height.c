#include "binary_trees.h"

/**
 * binary_tree_height   - Measures the height of a binary tree
 *
 * @tree:                 Binary tree to be measured
 *
 * Return:                (0) If @tree is NULL
 *                        (number) height of @tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (!tree || (!(tree->left) && !(tree->right)))
	{
		return (0);
	}

	left = binary_tree_height(tree->left) + 1;
	right = binary_tree_height(tree->right) + 1;

	return (left > right ? left : right);
}
