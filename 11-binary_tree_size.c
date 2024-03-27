#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_size- size the height of a binary tree
 * @tree:pointer to root
 * Return:0
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t l_size;
	size_t r_size;
	if (tree == NULL)
	{
		return (0);
	}
	l_size = binary_tree_size(tree->left);
	r_size = binary_tree_size(tree->right);

	return 1 + l_size + r_size;
}
