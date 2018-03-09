#include "binary_trees.h"

/**
 * binary_tree_size    - Measures the size of @tree
 *
 * @tree:                Binary tree to be measured
 *
 * Return:               (0) @tree is NULL
 *                       (number) size of binary tree @tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	return (!tree ? 0 : (1 + binary_tree_size(tree->left) +
			      binary_tree_size(tree->right)));
}
