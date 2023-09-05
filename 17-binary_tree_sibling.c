# include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a given node in a binary tree
 * @node: pointer to the node for which the sibling is to be found
 *
 * Return: a pointer to the sibling node, or NULL if the node or its parent is
 * NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{

	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	else
		return (node->parent->left);
}
