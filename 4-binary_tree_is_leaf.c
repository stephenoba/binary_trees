#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if node is a leaf
 *
 * @node: Node
 * Return: 1 if true, 0 if false or NULL
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node && !node->left && !node->right)
	{
		return (1);
	}
	return (0);
}
