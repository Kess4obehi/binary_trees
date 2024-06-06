#include "binary_trees.h"

/**
 * tree_height - Calculates the height of a binary tree.
 * @tree: A pointer to a node in the binary tree
 * Return: The height of the tree.
 * Returns 0 if the input node is NULL or if the node is a leaf.
 */
size_t tree_height(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (tree == NULL)
		return (0);

	left = tree_height(tree->left);
	right = tree_height(tree->right);

	if (left > right)
	{
		return (1 + left);
	}
	else
	{
		return (1 + right);
	}
}

/**
 * binary_tree_balance - Calculates the balance factor of a binary tree node.
 * @tree: A pointer to a node in the binary tree.
 * Return: The balance factor of the node. Returns 0 if the input node is NULL.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (tree == NULL)
		return (0);

	left = tree_height(tree->left);
	right = tree_height(tree->right);

	return (left - right);
}
