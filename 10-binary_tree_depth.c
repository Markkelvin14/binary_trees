#include "binary_trees.h"
/**
 * binary_tree_depth - finds the binary_tree depth
 * @tree: pointer to the node to measure the depth
 * Return: depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int deep = 0;

	if (tree == NULL)
		return (0);
	if (tree->parent != NULL)
		deep = (1 + binary_tree_depth(tree->parent));
	return (deep);
}
