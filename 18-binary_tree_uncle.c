#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * *binary_tree_uncle- check if nodes are siblings
 * @node:pointer to parent
 * Return:0
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
	{
		return (NULL);
	}
	if (node->parent->parent->right == node->parent)
		return (node->parent->parent->left);
	return (node->parent->parent->right);
}
