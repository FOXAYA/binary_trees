#include "binary_trees.h"
/**
 * binary_tree_insert_right - add a node in the right of the parent
 * if it exists it move down one level and add the new node first
 * @parent: parent of the specified node
 * @value: value of the node
 * Return: NULL if it fails or the new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *N_node;

	if (parent == NULL)
	{
		return (NULL);
	}
	N_node = binary_tree_node(parent, value);
	if (N_node == NULL)
	{
		return (NULL);
	}
	if (parent->right != NULL)
	{
		N_node->right = parent->right;
		parent->right->parent = N_node;
	}
	parent->right = N_node;
	return (N_node);
}
