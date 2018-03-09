#include "binary_trees.h"

/**
 * binary_tree_depth   - Measures depth of @node in a binary tree
 *
 * @node:                Node to be measured
 *
 * Return:               (0) node is NULL
 *                       (number) depth of @node
 */


size_t binary_tree_depth(const binary_tree_t *node)
{
	return ((!node || !node->parent) ? 0 : 1 +
		binary_tree_depth(node->parent));
}
