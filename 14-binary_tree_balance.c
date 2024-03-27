#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

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
	if (tree->left == NULL && tree->right == NULL)
	{
		return (0);
	}
	if (tree->left == NULL)
	{
		return (-1);
	}
	if (tree->right == NULL)
	{
		return (1);
	}
	l_balance = binary_tree_balance(tree->left);
	r_balance = binary_tree_balance(tree->right);
	return (l_balance - r_balance);
}
