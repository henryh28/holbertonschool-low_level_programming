#include "binary_trees.h"

/**
 * binary_tree_is_full   - Checks if binary tree is full
 *
 * @tree:                  Binary tree to check
 *
 * Return:                 (0) @tree is NULL, or @tree is not full
 *                         (1) @tree is full
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
	{
		return (0);
	}

	return (!tree->left && !tree->right ? 1 :
		binary_tree_is_full(tree->left) &&
		binary_tree_is_full(tree->right));
}
