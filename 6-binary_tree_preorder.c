#include "binary_trees.h"

/**
 * binary_tree_preorder - Traverse a binary tree in pre-order
 *
 * @tree: Tree
 * @func: function to print tree
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	binary_tree_t *temp;

	if (tree && func)
	{
		func(tree->n);
		if (tree->left)
		{
			binary_tree_preorder(tree->left, func);
		}
		else if (tree->right)
		{
			binary_tree_preorder(tree->right, func);
		}
		else
		{
			if (tree->parent)
			{
				if (tree->parent->left == tree)
				{
					temp = tree->parent->right;
					binary_tree_preorder(temp, func);
				}
				else
				{
					temp = tree->parent->parent;
					if (temp && temp->right != tree->parent)
					{
						binary_tree_preorder(temp->right, func);
					}
				}
			}
		}
	}
}
