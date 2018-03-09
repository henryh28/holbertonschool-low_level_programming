#include "binary_trees.h"
#include "9-binary_tree_height.c"

/**
 * binary_tree_balance   - Measures the balance of @tree
 *
 * @tree:                  Binary tree to be measured
 *
 * Return:                 (0) @tree is NULL
 *                         (number) balance factor of @tree
*/

int binary_tree_balance(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (!tree)
	{
		return (0);
	}

	if (tree->left)
	{
		left = binary_tree_height(tree->left) + 1;
	}

	if (tree->right)
	{
		right = binary_tree_height(tree->right) + 1;
	}

	return (left - right);
}
