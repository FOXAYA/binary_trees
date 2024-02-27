#include "binary_trees.h"
/**
 * binary_tree_insert_left - add a node in the left of >>  parent
 * if it exists >> move down one level and add the new node first
 * @parent: parent of the specified node
 * @value: value of the node
 * Return: NULL if it fails || the new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *n_node;
	
	if (parent == NULL)
	{
		return NULL;
	}
	
	n_node = binary_tree_node(parent, value);
	{
		n_node->left = parent->left;
		parent->left->parent = n_node;
	}
	parent->left = n_node;
	return (n_node);
}
