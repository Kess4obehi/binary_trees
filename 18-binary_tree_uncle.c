#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the sibling of a given node in a binary tree.
 * @node: A pointer to a node in the binary tree.
 * Return: A pointer to the sibling node.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent = NULL, *grand_parent = NULL;

	if (node == NULL)
		return (NULL);

	parent = node->parent;
	if (parent == NULL)
		return (NULL);

	grand_parent = parent->parent;
	if (grand_parent == NULL)
		return (NULL);

	if (grand_parent->left == parent)
		return (grand_parent->right);
	else
		return (grand_parent->left);
}
