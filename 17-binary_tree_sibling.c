#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * *binary_tree_sibling- check if nodes are siblings
 * @node:pointer to parent
 * Return:0
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}
	if (node->parent->right == node)
		return (node->parent->left);
	return (node->parent->left);
}
