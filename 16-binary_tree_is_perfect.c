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
	size_t right_h = 0;
	size_t left_h = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree)
		{
			right_h = tree->right ? 1 + binary_tree_height(tree->right) : 0;
			left_h =  tree->left ? 1 + binary_tree_height(tree->left) : 0;
		}
	}
	return (left_h > right_h ? left_h : right_h);
}

/**
 * binary_tree_is_perfect- check if binary tree is perfect
 * @tree:pointer to root
 * Return:0
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t l_side;
	size_t r_side;

	if (tree == NULL)
	{
		return (0);
	}
	l_side = binary_tree_height(tree->left);
	r_side = binary_tree_height(tree->right);

	if (l_side == r_side)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
