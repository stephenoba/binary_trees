#include "binary_trees.h"

/**
 * binary_tree_depth - computes the depth of a binary tree
 *
 * @tree: Tree
 * Return: depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree && tree->parent)
	{
		return (binary_tree_depth(tree->parent) + 1);
	}
	return (0);
}
