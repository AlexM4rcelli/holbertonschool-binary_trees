# include "binary_trees.h"

/**
 * binary_tree_size - measures the number of nodes of a binary tree
 * @tree: pointer to the root node of the tree to measure
 *
 * Return: size of the tree, or 0 if the tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree)
	{
		size += binary_tree_size(tree->left);
		size += binary_tree_size(tree->right);
		return (++size);
	}

	return (size);
}