#include "binary_trees.h"
#include <stdlib.h>

/**
 *  binary_tree_insert_right - inserts node to right of parent
 *  @parent: reference to parent node
 *  @value: data to be stored
 *
 *  Return: node created or NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *temp = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	if (temp == NULL || parent == NULL)
		return (NULL);
	temp->n = value;
	temp->left = NULL;
	temp->right = NULL;

	temp->parent = parent;
	if (parent->right != NULL)
	{
		temp->right = parent->right;
		parent->right = temp;
		temp->right->parent = temp;
	}
	else
		parent->right = temp;

	return (temp);
}
