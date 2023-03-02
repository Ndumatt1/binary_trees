#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node
 * @node: Pointer to the node to find the unlce
 * Return: Pointer to the uncle node or NULL if node is NULL
 */
binary_tree_t *binary_tree_siblings(binary_tree_t *node);

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent;

	if (!node || !node->parent)
	{
		return (NULL);
	}
	parent = node->parent;
	return (binary_tree_siblings(parent));

}

/**
 * binary_tree_siblings - finds the sibling of a node
 * @node: pointer to the node to find the sibling
 * Return: pointer to the sibling node
 * NULL if node is NULL
 * NULL if the parent is NULL
 * NULL if the node has no siblings
 */
binary_tree_t *binary_tree_siblings(binary_tree_t *node)
{
	binary_tree_t *parent;

	if (!node || !node->parent)
	{
		return (NULL);
	}
	parent = node->parent;
	if (parent->left == node)
		return (parent->right);
	if (parent->right == node)
		return (parent->left);
	return (NULL);
}
