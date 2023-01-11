#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node into a binary tree, right
 *
 * @parent: pointer to the tree wherein to insert the left node into
 * @value: value to store in the new node
 *
 * Return: pointer to the new node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	if (!parent)
		return (NULL);

	newnode = binary_tree_node(parent, value);

	if (!newnode)
		return (NULL);

	if (parent->right)
	{
		newnode->right = parent->right;
		parent->right->parent = newnode;
	}
	parent->right = newnode;

	return (newnode);
}
