#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: pointer to the node to insert the right-child.
 * @value: value to store in the new node.
 *
 * Return: If an error occurs - NULL.
 *         Otherwise - a pointer to the created node.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *newnode;

if (parent == NULL)
return (NULL);
newnode = malloc(sizeof(binary_tree_t));
if (newnode == NULL)
return (NULL);
newnode->parent = parent;
newnode->n = value;
newnode->left = NULL;
newnode->right = parent->right;
parent->right = newnode;

if (newnode->right)
newnode->right->parent = newnode;

return (newnode);
}