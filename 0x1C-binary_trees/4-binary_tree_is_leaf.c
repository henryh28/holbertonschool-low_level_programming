#include "binary_trees.h"

/**
 * binary_tree_is_leaf   - Check if a node is a leaf
 *
 * @node:                  Node to be checked
 *
 * Return:                 (1) if node is leaf
 *                         (0) for all other cases
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	return (node && !node->left && !node->right ? 1 : 0);
}
