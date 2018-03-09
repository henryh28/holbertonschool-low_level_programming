#include "binary_trees.h"

/**
 * binary_tree_leaves    - Counts the number of leave nodes in @tree
 *
 * @tree:                  Binary tree to be counted
 *
 * Return:                 (0) if @tree is NULL
 *                         (number) number of leaf nodes in @tree
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int leaf = 0;

	if (!tree)
	{
		return (0);
	}

	leaf += binary_tree_leaves(tree->left);
	leaf += binary_tree_leaves(tree->right);

	return (!tree->left && !tree->right ? 1 : leaf);
}
