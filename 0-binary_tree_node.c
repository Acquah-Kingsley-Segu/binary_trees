#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_node - creates a tree note
 * @parent: reference to parent node of the node being created
 * @value: data to be stored in node
 *
 * Return: return node created or NULL when not successful
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *temp = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	if (temp == NULL)
		return (NULL);

	temp->n = value;
	temp->left = NULL;
	temp->right = NULL;

	if (parent == NULL)
		temp->parent = NULL;
	else
		temp->parent = parent;

	return (temp);
}
