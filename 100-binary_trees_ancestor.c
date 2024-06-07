#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes.
 * @first: Pointer to the first node.
 * @second: Pointer to the second node.
 *
 * Return: If no common ancestors return NULL, else return common ancestor.
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *mum1, *mum2;

	if (!first || !second)
		return (NULL);
	if (first == second)
		return ((binary_tree_t *)first);

	mum1 = first->parent, mum2 = second->parent;
	if (first == mum2 || !mum1 || (!mum1->parent && mum2))
		return (binary_trees_ancestor(first, mum2));
	else if (mum1 == second || !mum2 || (!mum2->parent && mum1))
		return (binary_trees_ancestor(mum1, second));
	return (binary_trees_ancestor(mum1, mum2));
}
