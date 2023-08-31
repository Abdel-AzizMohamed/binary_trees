#include "binary_trees.h"


/**
 * binary_tree_balance - check if the tree is balanced
 * @tree: tree to check
 *
 * Return: tree balance factor
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (!tree)
		return (0);

	left = _binary_tree_height(tree->left);
	right = _binary_tree_height(tree->right);

	return (left - right);
}


/**
 * _binary_tree_height - gets the tree height from a tree node
 * @tree: node to start serach from it
 *
 * Return: the tree hight from a node
*/
size_t _binary_tree_height(const binary_tree_t *tree)
{
	size_t left_hei = 0, right_hei = 0;

	if (!tree)
		return (0);

	left_hei = tree->left ? 1 + binary_tree_height(tree->left) : 1;
	right_hei = tree->right ? 1 + binary_tree_height(tree->right) : 1;

	return ((left_hei > right_hei) ? left_hei : right_hei);
}
