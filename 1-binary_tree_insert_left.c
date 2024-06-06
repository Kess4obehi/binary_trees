#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: pointer to the node to insert the left-child.
 * @value: value to store in the new node.
 *
 * Return: If an error occurs - NULL.
 *         Otherwise - a pointer to the created node.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *newnode;

if (parent == NULL)
return (NULL);
newnode = malloc(sizeof(binary_tree_t));
if (newnode == NULL)
return (NULL);
newnode->parent = parent;
newnode->n = value;
newnode->left = parent->left;
newnode->right = NULL;
parent->left = newnode;

if (newnode->left)
newnode->left->parent = newnode;

return (newnode);
}
