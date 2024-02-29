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
	binary_tree_t *No_de;

	if (parent == NULL)
	{
		return (NULL);
	}
	No_de = binary_tree_node(parent, value);
	if (No_de == NULL)
	{
		return (NULL);
	}
	if (parent->right != NULL)
	{
		No_de->right = parent->right;
		parent->right->parent = No_de;
	}
	parent->right = No_de;
	return (No_de);
}
