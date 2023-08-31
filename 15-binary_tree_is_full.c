#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if the tree is full
 * @tree: tree to search
 *
 * Return: 1 if full else 0
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree)
	{
		if ((!(tree->left) && tree->right) || (!(tree->right) && tree->left))
			return (0);
		else if (binary_tree_is_full(tree->left) == 0)
			return (0);
		else if (binary_tree_is_full(tree->right) == 0)
			return (0);
	}

	return (1);
}
