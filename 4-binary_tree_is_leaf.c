#include "binary_trees.h"
/**
* binary_tree_is_leaf - is leaf?
* @node: node to evaluate.
* Return: 1 is leaf orherwise 0.
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{

	if (!node)
	{
		return (0);
	}
if (node->left || node->right)
{
return (0);
}
return (1);
}
