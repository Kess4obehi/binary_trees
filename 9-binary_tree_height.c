#include "binary_trees.h"

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (tree == NULL)
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	if (left > right)
	{
		if (root->left == NULL && root->right == NULL)
			return (0);
		else
			return (1 + left);
	}
	else
	{
		if (root->left == NULL && root->right == NULL)
			return (0);
		else
			return (1 + right);
	}
}
