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
	size_t left_side;
	size_t right_side;

	if (tree == NULL)
	{
		return (0);
	}

	left_side = binary_tree_height(tree->left);
	right_side = binary_tree_height(tree->right);
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	if (tree->left != NULL && tree->right != NULL)
	{
		return (left_side == right_side && binary_tree_is_perfect(tree->left)
				&& binary_tree_is_perfect(tree->right));
	}
	return (0);

}
