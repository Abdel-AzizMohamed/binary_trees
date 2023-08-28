#include "binary_trees.h"


/**
 * binary_tree_insert_left - inserts a node
 * as left child in the given parent
 * @parent: given parent to insert into
 * @value: value of the new node
 *
 * Return: the insered node
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (!parent)
		return (NULL);

	node = malloc(sizeof(binary_tree_t));
	if (!node)
		return (NULL);


	node->n = value;
	node->right = NULL;
	node->left = parent->left;

	if (parent->left)
		parent->left->parent = node;

	node->parent = parent;
	parent->left = node;

	return (node);
}
