# include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a new left child node in a binary tree
 * @parent: pointer to the parent node where the new node will be added
 * @value: the integer value to be stored in the new node
 *
 * Return: a pointer to the newly created left child node, or NULL on failure
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	if (parent)
	{
		new_node = binary_tree_node(parent, value);
		if (!new_node)
			return (NULL);

		if (parent->left)
		{
			new_node->left = parent->left;
			new_node->left->parent = new_node;
		}
		parent->left = new_node;
	}

	return (new_node);
}
