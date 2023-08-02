#include "binary_trees.h"
#include "9-binary_tree_height.c"
/**
 * binary_tree_balance - measures balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure balance factor
 * Return: balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int r_height = 0;
	int l_height = 0;

	if (tree == NULL)
		return (0);

	l_height = (binary_tree_height(tree->left));
	r_height = (binary_tree_height(tree->right));
	if (tree->left == NULL)
		l_height--;
	if (tree->right == NULL)
		r_height--;
	return (l_height - r_height);
}
