#include "binary_trees.h"

/**
 * binary_tree_depth - calculates the depth of a binarytree
 * @tree: pointer to the node to measure the depth
 *
 *  Return: the depth of a binary tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	else
		return (1 + binary_tree_depth(tree->parent));
}