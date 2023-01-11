#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a tree
 *
 * @tree: pointer to the root node of the tree
 *
 * Return: balance factor or 0 if NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));

	return (0);
}

/**
 * binary_tree_height - It wouldn't let me affix this function
 * to the compiler for some reason, so I'm re-threading it here.
 *
 * @tree: pointer to the root node of the tree
 *
 * Return: height or 0 if NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t l = 0, r = 0;

		l = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		r = tree->right ? 1 + binary_tree_height(tree->right) : 1;
		return ((l > r) ? l : r);
	}
	return (0);
}
