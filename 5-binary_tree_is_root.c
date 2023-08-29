#include "binary_trees.h"


/**
 * binary_tree_is_root - checks if the given node is root (start of the tree)
 * @node: given node to check
 *
 * Return: 1 if its root else 0 if not or in failure
*/
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node || node->parent)
		return (0);

	return (1);
}
