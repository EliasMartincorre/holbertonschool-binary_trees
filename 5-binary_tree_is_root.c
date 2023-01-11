#include "binary_trees.h"
/**
  * binary_tree_is_root - is a root?
  * @node: elemento to evaluate.
  * Return: 1 is a root otherwise 0.
  */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
	{
		return (0);
	}
	if (!node->parent)
	{
		return (1);
	}
return (0);
}

