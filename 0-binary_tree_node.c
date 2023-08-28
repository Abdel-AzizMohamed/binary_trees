#include "binary_trees.h"


/**
 * binary_tree_node - creates a new binary tree node
 * without children only parent and its value
 * @parent: parent of the new node
 * @value: value of the new bode
 *
 * Return: the new node else NULL on failure
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t));
	if (!node)
		return (NULL);

	node->parent = parent;
	node->n = value;
	node->left = NULL;
	node->right = NULL;

	return (node);
}
