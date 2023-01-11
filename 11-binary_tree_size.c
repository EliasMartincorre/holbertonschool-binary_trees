#include "binary_trees.h"
/**
* binary_tree_size - size.
* @tree: node .
*
* Return: size.
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t  size = 0;

while (tree)
{
size += 1 + binary_tree_size(tree->left);
return (size + binary_tree_size(tree->right));
}
return (size);
}
