#include "binary_trees.h"
/**
  * binary_tree_insert_left - insert left.
  * @parent: parent.
  * @value: valor.
  * Return: pointer.
  */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{

binary_tree_t *newnode;
struct binary_tree_s *temporal;

newnode = malloc(sizeof(binary_tree_t));/**memory allocate for new node*/
if (newnode == NULL)/** verification of suceffuly*/
{
return (NULL);
}
newnode->n = value;/** asignament value of the nodes*/
if (!parent->left)
	{
	newnode->parent = parent;
	parent->left = newnode;
	}
else
	{
	temporal = parent->left;
	newnode->parent = parent;
	parent->left = newnode;
	temporal->parent = newnode;
	newnode->left = temporal;
}
return (newnode);
}
