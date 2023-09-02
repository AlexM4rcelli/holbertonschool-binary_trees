# include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a node in a binary tree
 * @tree: pointer to the node for which height is to be measured
 *
 * Return: height of the node, or 0 if the node is NULL or the root
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height = 0;

	if (tree && tree->parent)
	{
		height += binary_tree_height(tree->parent);
		return (++height);
	}
	return (height);
}