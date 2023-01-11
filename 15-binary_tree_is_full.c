#include "binary_trees.h"

/**
 * is_it_full - the ACTUAL function that checks if a tree is full
 *
 * @tree: pointer to the root node of tree
 *
 * Return: 0 if not full 1 if full
 */

int is_it_full(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		if ((tree->left != NULL && tree->right == NULL) ||
		    (tree->left == NULL && tree->right != NULL) ||
		    is_it_full(tree->left) == 0 ||
		    is_it_full(tree->right) == 0)
			return (0);
	}
	return (1);
}

/**
 * binary_tree_is_full - checks to see if tree is full
 *
 * @tree: pointer to root node of tree
 * Return: 0 if not full or 1 if full
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (is_it_full(tree));
}
