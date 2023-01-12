#include "binary_trees.h"
/**
  * binary_tree_leaves - cuantas hojas.
  * @tree: first node.
  * Return: total leaves.
  */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
size_t l = 0, la = 0;

if (!tree->left && !tree->right)
{
	l += 1;
}
if (tree->left || tree->right)
{
if (tree->left)
{
binary_tree_leaves(tree->left);
l += 1;
}
if (tree->right)
{
binary_tree_leaves(tree->right);
la += 1;
}
}
return (l + la);
}
