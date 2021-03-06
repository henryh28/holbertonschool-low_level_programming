#include "binary_trees.h"

/**
 * binary_trees_ancestor - Find the lowest common ancestor of 2 nodes
 *
 * @first:                 First node used for the search
 * @second:                Second node used for the search
 *
 * Return:                 (Success)Pointer to lowest common ancestor node
 *                         (Failure) NULL
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	binary_tree_t *second_copy;

	second_copy = (binary_tree_t *)second;

	if (!first || !second)
	{
		return (NULL);
	}

	if (first == second)
	{
		return ((binary_tree_t *)first);
	}

	while (first)
	{
		while (second_copy)
		{
			if (second_copy->parent == first)
			{
				return ((binary_tree_t *)first);
			}

			if (second_copy->parent == first->parent)
			{
				return ((binary_tree_t *)first->parent);
			}
			second_copy = second_copy->parent;
		}
		first = first->parent;
		second_copy = (binary_tree_t *)second;
	}

	return (NULL);
}
