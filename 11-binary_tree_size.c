#include "binary_trees.h"

/**
 * binary_tree_size - Calculates the size of a binary tree.
 * @tree: A pointer to a node in the binary tree.
 * Return: The size of the tree. Returns 0 if the input node is NULL.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left = 0, right = 0, size = 0;

	if (tree == NULL)
		return (0);

	left = binary_tree_size(tree->left);
	right = binary_tree_size(tree->right);

	size = left + right;

	return (1 + size);
}
