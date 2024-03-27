#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

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
			right_h = tree->right ? 1 + binary_tree_height(tree->right) : 1;
			left_h =  tree->left ? 1 + binary_tree_height(tree->left) : 1;
		}
	}
	return (left_h > right_h ? left_h : right_h);
}

/**
 * binary_tree_balance- measures the balance factor
 * @tree:pointer to root
 * Return:0
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int l_balance = 0;
	int r_balance = 0;

	if (tree == NULL)
	{
		return (0);
	}
	l_balance = binary_tree_height(tree->left);
	r_balance = binary_tree_height(tree->right);
	return (l_balance - r_balance);
}
