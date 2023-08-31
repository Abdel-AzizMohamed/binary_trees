#include "binary_trees.h"

/**
 * binary_tree_depth - gets the tree detph from a given node
 * @tree: tree node to serach from
 *
 * Return: the tree deapth else 0 in failure or in case of root node
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree || !(tree->parent))
		return (0);

	depth = binary_tree_depth(tree->parent) + 1;

	return (depth);
}
