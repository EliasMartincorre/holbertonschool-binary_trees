#include "binary_trees.h"
/**
  * binary_tree_node - delete tree.
  * @parent: parent.
  * @value: valor a asignar.
  * Return: pointer new node.
  */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{

binary_tree_t *newnode;

newnode = malloc(sizeof(binary_tree_t));/**memory allocate for new node*/

if (newnode == NULL)/** verification of suceffuly*/
{
return (NULL);
}
newnode->n = value;/** asignament value of the nodes*/
newnode->parent = parent;
newnode->left = NULL;
newnode->right = NULL;
return (newnode);
}
