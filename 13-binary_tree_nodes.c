# include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: pointer to the root node of the binary tree to count nodes in
 *
 * Return: the number of nodes with at least 1 child from a node, or 0 if the tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t size = 0;
	if (!tree)
		return (size);
	else
	{
		if (tree->left)
		{
			size = binary_tree_nodes(tree->left);
			return (++size);
		}
		else if (tree->right)
		{
			size = binary_tree_nodes(tree->right);
			return (++size);
		}
		else
			return (size);
	}
}