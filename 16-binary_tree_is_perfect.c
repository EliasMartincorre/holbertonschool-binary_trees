#include "binary_trees.h"

unsigned char is_leaf(const binary_tree_t *node);

size_t depth(const binary_tree_t *tree);

const binary_tree_t *get_leaf(const binary_tree_t *tree);

int is_perfect_recursive(const binary_tree_t *tree,
	size_t leaf_depth, size_t level);

int binary_tree_is_perfect(const binary_tree_t *tree);

/**
 * is_leaf - revamped version of previous exercise
 * slightly modified to fit this better
 *
 * @node: pointer to node to check.
 *
 * Return: 1 if node is a leaf, 0 if not.
 */

unsigned char is_leaf(const binary_tree_t *node)
{
	return ((node->left == NULL && node->right == NULL) ? 1 : 0);
}

/**
 * depth - revamped version of previous exercise
 * slightly modified to fit this better
 *
 * @tree: pointer to node
 *
 * Return: depth of the node
 */

size_t depth(const binary_tree_t *tree)
{
	return (tree->parent != NULL ? 1 + depth(tree->parent) : 0);
}

/**
 * get_leaf - slightly modified version of previous exercise
 *
 * @tree: pointer to root node of the tree
 *
 * Return: pointer to the first leaf it can find
 */

const binary_tree_t *get_leaf(const binary_tree_t *tree)
{
	if (is_leaf(tree) == 1)
		return (tree);
	return (tree->left ? get_leaf(tree->left) : get_leaf(tree->right));
}

/**
 * is_perfect_recursive - the actual function that checks if tree is perf
 *
 * @tree: pointer to root node of the tree
 * @leaf_depth: The depth of a singular leaf in the tree
 * @level: current node depth basically
 *
 * Return: 1 if tree is perfect, 0 if not
 */

int is_perfect_recursive(const binary_tree_t *tree,
	size_t leaf_depth, size_t level)
{
	if (is_leaf(tree))
		return (level == leaf_depth ? 1 : 0);
	if (tree->left == NULL || tree->right == NULL)
		return (0);
	return (is_perfect_recursive(tree->left, leaf_depth, level + 1) &&
		is_perfect_recursive(tree->right, leaf_depth, level + 1));
}

/**
 * binary_tree_is_perfect - checks if a tree is perfect
 *
 * @tree: pointer to root node of the tree
 *
 * Return: 1 if perfect, 0 if not or if does not exist
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (is_perfect_recursive(tree, depth(get_leaf(tree)), 0));
}
