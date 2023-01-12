#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the amount of leaves in a binary tree
 * with recursion of course, because this is like the only time
 * ever since we learnt that that I feel compelled to use it
 * and you know damn well I'm gonna milk that fact
 *
 * @tree: pointer to the root node of the tree
 *
 * Return: amount of leaves, or 0 if tree does not exist
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t treeleaves = 0;

	if (!tree)
		return (0);

	treeleaves += (!tree->left && !tree->right) ? 1 : 0;
	treeleaves += binary_tree_leaves(tree->left);
	treeleaves += binary_tree_leaves(tree->right);
	return (treeleaves);
}
