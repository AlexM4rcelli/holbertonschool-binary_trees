# include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a new right child node in a binary tree
 * @parent: pointer to the parent node where the new node will be added
 * @value: the integer value to be stored in the new node
 *
 * Return: a pointer to the newly created right child node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL, *old_node = NULL;

	new_node = binary_tree_node(parent, value);
	if (!new_node)
		return (NULL);

	if (parent->right)
	{
		old_node = parent->right;
		parent->right = new_node;
        new_node->right = old_node;
		old_node->parent = new_node;
	}
	else
		parent->right = new_node;

	return (new_node);
}