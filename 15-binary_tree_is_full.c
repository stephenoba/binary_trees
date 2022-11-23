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
 * num_leaves - count number of leaves in a tree/sub-tree
 *
 * @tree: Tree
 * Return: Count of leaves
 */
int num_leaves(const binary_tree_t *tree)
{
	int left, right;

	if (tree)
	{
		if (!tree->left && !tree->right)
		{
			return (1);
		}
		left = num_leaves(tree->left);
		right = num_leaves(tree->right);
		return (left + right);
	}
	return (0);
}

/**
 * _pow - calculate power of a number
 *
 * @base: Base
 * @exp: Exponential
 * Return: power
 */
int _pow(int base, int exp)
{
	int res;

	if (exp == 0)
		res = 1;

	while (exp != 0)
	{
		res *= base;
		--exp;
	}
	return res;
}

/**
 * binary_tree_is_full - checks if tree is full
 *
 * @tree: Tree
 * Return: 1 if true, 0 if NULL or false
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int max_nodes;

	if (tree)
	{
		max_nodes = _pow(2, height(tree) - 1);
		if (max_nodes == num_leaves(tree))
			return (1);
	}
	return (0);
}
