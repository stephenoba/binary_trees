#include "binary_trees.h"

/**
 * binary_tree_inorder - Traverse a binary tree in order
 *
 * @tree: Tree
 * @func: function to print tree
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
