#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if node is root
 *
 * @node: Node
 * Return: 1 if true, 0 if false or NULL
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node && !node->parent)
	{
		return (1);
	}
	return (0);
}
