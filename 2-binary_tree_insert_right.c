#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right child of another node
 * @parent: parent is a pointer to the node to insert the right child in
 * @value: the value to store in the new node
 * Return: return newnode or NULL if it fails
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	if (!parent)
	{
		return (NULL);
	}
	newnode = malloc(sizeof(binary_tree_t));
	if (!newnode)
	{
		return (NULL);
	}
	newnode->n = value;
	newnode->parent = parent;
	newnode->left = NULL;
	newnode->right = parent->right;

	if (parent->right == NULL)
	{
		parent->right = newnode;
	}
	else
	{
		newnode->right = parent->right;
		parent->right = newnode;
	}
	return (newnode);
}

