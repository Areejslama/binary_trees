#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves
 * @tree:pointer to root
 * Return:0
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t l;
	size_t r;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	l = binary_tree_leaves(tree->left);
	r = binary_tree_leaves(tree->right);
	return (l + r);
}
