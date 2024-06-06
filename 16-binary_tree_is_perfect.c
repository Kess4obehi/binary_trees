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
 * is_balance - Calculates the balance factor of a binary tree node.
 * @tree: A pointer to a node in the binary tree.
 * Return: The balance factor of the node. Returns 0 if the input node is NULL.
 */
int is_balance(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (tree == NULL)
		return (0);

	left = tree_height(tree->left);
	right = tree_height(tree->right);

	return (left - right);
}

/**
 * tree_is_full - Determines if a binary tree is full.
 * @tree: A pointer to a node in the binary tree.
 * Return: 1 if the tree is full, 0 otherwise.
 */
int tree_is_full(const binary_tree_t *tree)
{
	int left = 0, right = 0, is_full = 0;

	if (tree == NULL)
		return (0);

	left = tree_is_full(tree->left);
	right = tree_is_full(tree->right);

	is_full = left * right;

	if (tree->left == NULL && tree->right == NULL)
		return (1);
	else if (tree->left != NULL && tree->right != NULL)
		return (1 * is_full);
	else
		return (0 * is_full);
}

/**
 * binary_tree_is_perfect - Determines if a binary tree is perfect.
 * @tree:  A pointer to a node in the binary tree.
 * Return: 1 if the tree is perfect, 0 otherwise.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int is_full = 0, is_balanced = 0;

	if (tree == NULL)
		return (0);

	is_full = tree_is_full(tree);
	is_balanced = is_balance(tree);

	if (is_full == 1 && is_balanced == 0)
		return (1);
	else
		return (0);
}
