#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_preorder- pre-order traversal
 * @tree:pointer to root
 * @func:function to call
 * Return:0
*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
	func(tree->n);
	if (tree->left != NULL)
	{
		binary_tree_preorder(tree->left, func);
	}
	if (tree->right != NULL)
	{
		binary_tree_preorder(tree->right, func);
	}
}
