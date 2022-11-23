#include "binary_trees.h"

/**
 * binary_tree_height - computes the height of a binary tree
 *
 * @tree: Tree
 * Return: height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t left_height, right_height, max_height;

		if (tree->left)
			left_height = binary_tree_height(tree->left) + 1;
		else
			left_height = 0;
		if (tree->right)
			right_height = binary_tree_height(tree->right) + 1;
		else
			right_height = 0;
		if (left_height > right_height)
			max_height = left_height;
		else
			max_height = right_height;
		return (max_height);
	}
	return (0);
}
