#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_nodes- count nodes of binary tree
 * @tree:pointer to root
 * Return:0
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t num = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left != NULL || tree->right != NULL)
	{
		num++;
	}
	num += binary_tree_nodes(tree->left);
	num += binary_tree_nodes(tree->right);
	return (num);
}
