#include "binary_trees.h"


/**
 * binary_tree_height - gets the tree height from a tree node
 * @tree: node to start serach from it
 *
 * Return: the tree hight from a node
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_hei = 0, right_hei = 0;

	if (!tree)
		return (0);

	left_hei = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	right_hei = tree->right ? 1 + binary_tree_height(tree->right) : 0;

	return ((left_hei > right_hei) ? left_hei : right_hei);
}
