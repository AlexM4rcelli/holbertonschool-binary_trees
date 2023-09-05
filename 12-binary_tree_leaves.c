#include"binary_trees.h"

/**
 * binary_tree_leaves - function that counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree to count the number of leaves
 *
 * Return: the amount of leaves in a tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leftside = 0, rightside = 0;
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	leftside = binary_tree_leaves(tree->left);
	rightside = binary_tree_leaves(tree->right);
	return (leftside + rightside);
}
