#include "binary_trees.h"

/**
 * binary_tree_delete - deletes a binary tree
 *
 * @tree: Tree
 */
void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *temp;

	temp = tree;
	/* using post-order tranversal */
	if (temp)
	{
		if (temp->left)
		{
			binary_tree_delete(temp->left);
		}
		else if (temp->right)
		{
			binary_tree_delete(temp->right);
		}
		else
		{
			temp = tree->parent;
			if (temp)
			{
				if (temp->left == tree)
					temp->left = NULL;
				else
					temp->right = NULL;
				free(tree);
				binary_tree_delete(temp);
			}
			else
				free(tree);
		}
	}
}
