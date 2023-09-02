# include "binary_trees.h"

/**
 * binary_tree_inorder - performs in-order traversal of a binary tree
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to be called on each node's value
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (1);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left != NULL && tree->right != NULL)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	return (0);
}
