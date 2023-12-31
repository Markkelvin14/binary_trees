#include "binary_trees.h"

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: first node
 * @second: second node
 * Return: pointer to common ancestor, or NULL on failure
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	binary_tree_t *ans;

	if (first == NULL || second == NULL)
		return (NULL);

	ans = (binary_tree_t *)second;
	while (first != NULL)
	{
		while (second != NULL)
		{
			if (first == second)
				return ((binary_tree_t *)first);
			second = second->parent;
		}
		first = first->parent;
		second = ans;
	}
	return (NULL);
}
