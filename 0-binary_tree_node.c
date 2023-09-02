# include "binary_trees.h"

/**
 * binary_tree_node - creates a new binary tree node
 * @parent: pointer to the parent node of the new node
 * @value: the integer value to be stored in the new node
 *
 * Return: a pointer to the newly created binary tree node, or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node = NULL;
    
    new_node = malloc(sizeof(binary_tree_t));
    if (!new_node)
        return (NULL);

    new_node->n = value;
    new_node->parent = parent;
    new_node->left = NULL;
    new_node->right = NULL;

    return (new_node);
}