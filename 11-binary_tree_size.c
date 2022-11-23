#include "binary_trees.h"

/**
 * binary_tree_size - compute size of tree
 *
 * @tree: Tree
 * Return: size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t left, right;

		if (!tree->left && !tree->right)
			return (1);
		left = binary_tree_size(tree->left);
		right = binary_tree_size(tree->right);
		return ((left + right) + 1);
	}
	return (0);
}
