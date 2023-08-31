#include "binary_trees.h"


/**
 * binary_tree_size - gets the tree size from tree node
 * @tree: tree node to search from
 *
 * Return: tree size
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (!tree)
		return (0);

	size += 1;
	size += binary_tree_size(tree->left);
	size += binary_tree_size(tree->right);

	return (size);
}
