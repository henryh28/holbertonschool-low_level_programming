#include "binary_trees.h"

/**
 * binary_tree_nodes   - Counts number of nodes with at least 1 child
 *
 * @tree:                Binary tree to be counted
 *
 * Return:               (0) @tree is NULL
 *                       (number) number of nodes with at least 1 child
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int nodes = 0;

	if (!tree)
	{
		return (0);
	}

	nodes += binary_tree_nodes(tree->left);
	nodes += binary_tree_nodes(tree->right);

	return (tree->left || tree->right ? nodes + 1 : 0);
}
