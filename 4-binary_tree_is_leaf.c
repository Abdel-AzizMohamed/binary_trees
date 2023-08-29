#include "binary_trees.h"


/**
 * binary_tree_is_leaf - checks if the given node is leaf (has no children)
 * @node: given node to check
 *
 * Return: 1 if its leaf else 0 if not and in faliure
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node || node->right || node->left)
		return (0);

	return (1);
}
