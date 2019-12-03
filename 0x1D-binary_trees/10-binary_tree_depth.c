#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: pointer to the root node of the tree to traverse
 * Return: depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t cont = 0;

	if (tree == NULL || (tree->parent == NULL))
	{
		return (0);
	}
	else
	{
		cont = binary_tree_depth(tree->parent);
		return (cont + 1);
	}
}
