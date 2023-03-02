#include "binary_trees.h"

/**
 * binary_tree_levelorder - Goes through a binary tree using level order
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to the function to call for each node
 */

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
if (!tree || !func)
return;

func(tree->n);
binary_tree_levelorder(tree->left, func);
binary_tree_levelorder(tree->right, func);
}
