#include "binary_trees.h"
#include <stdlib.h>

/**
 *  binary_tree_insert_left - inserts node to left of parent
 *  @parent: reference to parent node
 *  @value: data to be stored
 *
 *  Return: node created or NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *temp = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	if (temp == NULL || parent == NULL)
		return (NULL);
	temp->n = value;
	temp->left = NULL;
	temp->right = NULL;

	temp->parent = parent;
	if (parent->left != NULL)
	{
		temp->left = parent->left;
		parent->left = temp;
		temp->left->parent = temp;
	}
	else
		parent->left = temp;

	return temp;
}
