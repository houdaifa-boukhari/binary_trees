# include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 *
 * @tree: pointer to the node to measure the depth
 *
 * Return: depth of the node, or 0 if tree is NULL
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t deep;

	deep = 0;
	if (!tree)
		return (0);
	while (tree->parent)
	{
		deep++;
		tree = tree->parent;
	}
}
