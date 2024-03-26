#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_height- measures the height of a binary tree
 * @tree:pointer to root
 * Return:0
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	int right_h;
	int left_h;
	if (tree == NULL)
	{
		return (0);
	}
	right_h = binary_tree_height(tree->right);
	left_h =  binary_tree_height(tree->left);
	return (left_h > right_h) ? (left_h + 1) : (right_h + 1);
}
