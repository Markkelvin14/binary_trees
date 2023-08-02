#include "binary_trees.h"
#include "15-binary_tree_is_full.c"
#include "14-binary_tree_balance.c"

/**
 * binary_tree_is_perfect - function that checks if binary tree is perfect
 * @tree: pointer to the root bode of the tree to check
 * Return: 1 if perfect
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (binary_tree_is_full(tree) == 1 && binary_tree_balance(tree) == 0 &&
	    binary_tree_height(tree->left) == binary_tree_height(tree->right))
		return (1);
	return (0);
}
