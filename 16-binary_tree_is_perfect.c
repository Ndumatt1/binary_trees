#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree to check
 * Return: 0 of tree is NULL and 1 if tree is perfect
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
	{
		return (0);
	}
	if (tree->left != NULL && tree->right != NULL)
	{
		return (binary_tree_is_perfect(tree->left) && binary_tree_is_perfect(tree->right));
	}
	return (0);
}
