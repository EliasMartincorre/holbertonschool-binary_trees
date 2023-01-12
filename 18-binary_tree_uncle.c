#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 *
 * @node: pointer to the node whose uncle must be found
 *
 * Return: pointer to uncle or NULL if no node or no uncle
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->parent)
		return (NULL);

	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);

	return (node->parent->parent->left);
}
