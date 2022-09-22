#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as a left child
 * @parent: pointer to the parent node
 * @value: the value to be assigned to the left_node
 * Return: left_node on success, else return NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_node;

	if (parent == NULL || !value)
		return (NULL);

	left_node = malloc(sizeof(binary_tree_t));
	if (left_node == NULL)
		return (NULL);

	left_node->n = value;
	left_node->left = NULL;
	left_node->left = NULL;
	left_node->parent = parent;

	if (parent->left != NULL)
	{
		left_node->left = parent->left;
		left_node->left->parent = left_node;
	}
	parent->left = left_node;
	return (left_node);
}
