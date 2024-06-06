#include "binary_trees.h"

/**
 * binary_tree_nodes - Calculates the number of non-leaf nodes in a binary tree
 * @tree: A pointer to a node in the binary tree.
 * Return: The number of non-leaf nodes in the tree.
 * Returns 0 if the input node is NULL.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left = 0, right = 0, nodes = 0;

	if (tree == NULL)
		return (0);

	left = binary_tree_nodes(tree->left);
	right = binary_tree_nodes(tree->right);

	nodes = left + right;

	if (tree->left != NULL || tree->right != NULL)
		return (1 + leaves);
	else
		return (leaves);
}
