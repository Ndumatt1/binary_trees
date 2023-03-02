#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node
 * @node: Pointer to the node to find the unlce
 * Return: Pointer to the uncle node or NULL if node is NULL
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent, *grandparent;

	if (!node)
	{
		return (NULL);
	}
	parent = node->parent;
	grandparent = parent->parent;

	if (grandparent == NULL)
		return (NULL);
	return (binary_tree_sibling(parent));

}
