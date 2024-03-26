#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_inorder- in-order traversal
 * @tree:pointer to root
 * @func:function to call
 * Return:0
*/
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
	func(tree->n);
	if (tree->left != NULL)
	{
		binary_tree_inorder(tree->left, func);
	}
	if (tree->right != NULL)
	{
		binary_tree_inorder(tree->right, func);
	}
}
