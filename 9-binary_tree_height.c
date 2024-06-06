#include "binary_trees.h"

/**
 * binary_tree_height - Calculates the height of a binary tree.
 * @tree: A pointer to a node in the binary tree
 * Return: The height of the tree.
 * Returns 0 if the input node is NULL or if the node is a leaf.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (tree == NULL)
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	if (left > right)
	{
		if (tree->left == NULL && tree->right == NULL)
			return (0);
		else
			return (1 + left);
	}
	else
	{
		if (tree->left == NULL && tree->right == NULL)
			return (0);
		else
			return (1 + right);
	}
}
