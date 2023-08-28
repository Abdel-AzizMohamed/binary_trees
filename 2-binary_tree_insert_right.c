#include "binary_trees.h"


/**
 * binary_tree_insert_right - inserts a node
 * as right child in the given parent
 * @parent: given parent to insert into
 * @value: value of the new node
 *
 * Return: the insered node
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (!parent)
		return (NULL);

	node = malloc(sizeof(binary_tree_t));
	if (!node)
		return (NULL);

	node->n = value;
	node->left = NULL;
	node->right = parent->right;

	if (parent->right)
		parent->right->parent = node;

	node->parent = parent;
	parent->right = node;

	return (node);
}
