#include "binary_trees.h"
/**
 * binary_tree_inorder - print elements of tree using in-order traversal
 * @tree: pointer to the root node
 * @func: pointer to a function to call
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
