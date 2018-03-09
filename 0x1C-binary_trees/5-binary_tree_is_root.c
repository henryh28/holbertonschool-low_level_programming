#include "binary_trees.h"

/**
 * binary_tree_is_root    - Check if @node is root of binary tree
 *
 * @node:                   Node to be checked
 *
 * Return:                  (1) If @node is the root of binary tree
 *                          (0) All other cases
 */


int binary_tree_is_root(const binary_tree_t *node)
{
	return (node && !node->parent);
}
