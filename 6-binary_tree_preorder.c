#include "binary_trees.h"

/**
 * binary_tree_preorder - just, sifts through a binary tree in a specific
 * order, basically (BUT THE RECURSION THOUGH)
 *
 * @tree: pointer to binary tree to be sifted through
 * @func: pointer to the function that will be used to sift
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
