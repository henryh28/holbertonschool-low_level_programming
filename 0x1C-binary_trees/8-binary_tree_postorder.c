#include "binary_trees.h"

/**
 * binary_tree_postorder  - Navigate binary tree with post-order traversal
 *
 * @tree:                   Root node of binary tree to navigate
 * @func:                   Function to be called at each node of tree
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
