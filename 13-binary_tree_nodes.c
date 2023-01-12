#include "binary_trees.h"

/**
 * binary_tree_nodes - counts how many nodes a tree has
 *
 * @tree: pointer to root node of tree
 *
 * Return: number or nodes, 0 if tree does not exist
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (!tree)
		return (0);

	nodes += (tree->left || tree->right) ? 1 : 0;
	nodes += binary_tree_nodes(tree->left);
	nodes += binary_tree_nodes(tree->right);

	return (nodes);
}

