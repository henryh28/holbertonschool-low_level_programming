#include "binary_trees.h"

/**
 * binary_tree_is_perfect   - Checks if @tree is perfect
 *
 * @tree:                     Binary tree to be checked
 *
 * Return:                    (0) @tree is NULL, or @tree is not perfect
 *                            (1) @tree is perfect
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (!tree || (!tree->left && tree->right) ||
	    (tree->left && !tree->right))
	{
		return (0);
	}

	if (!tree->left && !tree->right)
	{
		return (1);
	}

	left += binary_tree_is_perfect(tree->left);
	right += binary_tree_is_perfect(tree->right);

	return (tree->parent ? left + right : left == right &&
		(left + right) % 2 == 0);
}
