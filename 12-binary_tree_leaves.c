#include "binary_trees.h"

/**
 * binary_tree_leaves - count number of leaves in a tree/sub-tree
 *
 * @tree: Tree
 * Return: Count of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree)
	{
		if (!tree->left && !tree->right)
		{
			return (1);
		}
		left = binary_tree_leaves(tree->left);
		right = binary_tree_leaves(tree->right);
		return (left + right);
	}
	return (0);
}
