#include "binary_trees.h"
/**
  * binary_tree_sibling - have a sibling?
  * @node: nodo.
  * Return: pointer a sibling or null otherwise.
  */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	int k;

	if (node == NULL)
	{
		return (NULL);
	}
	k = node->n;

	if (node->parent)
	{
		if (node->parent->right && node->parent->left)
		{
			if (k > node->parent->left->n)
			{
				return (node->parent->left);
			}
		return (node->parent->right);
		}
	}
	return (NULL);
}
