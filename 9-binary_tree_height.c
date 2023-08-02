#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of binary tree
 * @tree: tree pointer to root to measure height
 * Return: height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int l_height = -1;
	int r_height = -1;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		l_height = binary_tree_height(tree->left);
	if (tree->right != NULL)
		r_height = binary_tree_height(tree->right);

	if (r_height > l_height)
		return (r_height + 1);
	else
		return (l_height + 1);
}
