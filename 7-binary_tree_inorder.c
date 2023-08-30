#include "binary_trees.h"


/**
 * binary_tree_inorder - preform in-order traversal on a tree
 * @tree: given tree
 * @func: function to print tree values
 *
 * Return: Nothing
*/
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
