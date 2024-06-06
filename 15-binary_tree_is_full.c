#include "binary_trees.h"

/**
 * binary_tree_is_full - Determines if a binary tree is full.
 * @tree: A pointer to a node in the binary tree.
 * Return: 1 if the tree is full, 0 otherwise.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left = 0, right = 0, is_full = 0;

	if (tree == NULL)
		return (0);

	left = binary_tree_is_full(tree->left);
	right = binary_tree_is_full(tree->right);

	is_full = left * right;

	if (tree->left == NULL && tree->right == NULL)
		return (1);
	else if (tree->left != NULL && tree->right != NULL)
		return (1 * is_full);
	else
		return (0 * is_full);
}
