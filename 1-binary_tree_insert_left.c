#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node into a binary tree, left side
 *
 * @parent: pointer to the tree wherein to insert the left node into
 * @value: value to store in the new node
 *
 * Return: pointer to the new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	if (!parent)
		return (NULL);

	newnode = binary_tree_node(parent, value);

	if (!newnode)
		return (NULL);

	if (parent->left)
	{
		newnode->left = parent->left;
		parent->left->parent = newnode;
	}
	parent->left = newnode;

	return (newnode);
}
