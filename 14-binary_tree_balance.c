#include "binary_trees.h"

/**
 * height - computes the height of a binary tree
 *
 * @tree: Tree
 * Return: height
 */
int height(const binary_tree_t *tree)
{
	if (tree)
	{
		int left_height, right_height, max_height;

		left_height = height(tree->left);
		right_height = height(tree->right);

		if (left_height > right_height)
			max_height = left_height;
		else
			max_height = right_height;
		return (max_height + 1);
	}
	return (0);
}

/**
 * binary_tree_balance - compute balance factor of a tree/subtree
 *
 * @tree: Tree
 * Return: balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int balance_factor;

	balance_factor = height(tree->left) - height(tree->right);
	return (balance_factor);
}
