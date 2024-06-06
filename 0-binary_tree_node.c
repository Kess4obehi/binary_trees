#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree node.
 * @parent: A pointer to the parent of the node to create.
 * @value: the value to put in the new node.
 * Return: pointer to the new node.
 */

 binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
 {
    binary_tree_t *newnode;

    newnode = malloc(sizeof(binary_tree_t));
    if (newnode == NULL)
    {
        return (NULL);
    }

    newnode->parent = parent;
    newnode->n = value;
    newnode->left = NULL;
    newnode->right = NULL;

    return (newnode);

 }
