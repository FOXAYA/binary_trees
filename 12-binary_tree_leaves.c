#include "binary_trees.h"
/**
 * binary_tree_leaves - function that returns the number of leaves in a tree
 * @tree: tree to check
 * Return: number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t LeaF = 0, Lf = 0, Rt = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		Lf = binary_tree_leaves(tree->left);
		Rt = binary_tree_leaves(tree->right);
		LeaF = Lf + Rt;
		return ((!Lf && !Rt) ? LeaF + 1 : LeaF + 0);
	}
}
