#include "binary_trees.h"


/**
 * binary_tree_leaves - counts tree leafs from a start node
 * @tree: tree node to search from
 *
 * Return: leafs count from node
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leafs = 0;

	if (!tree)
		return (0);

	if (!(tree->left) && !(tree->right))
		leafs += 1;

	leafs += binary_tree_leaves(tree->left);
	leafs += binary_tree_leaves(tree->right);

	return (leafs);
}
