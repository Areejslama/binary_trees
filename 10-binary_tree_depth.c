#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_depth- measures the height of a binary tree
 * @tree:pointer to root
 * Return:0
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return (tree->parent) && tree ? 1 + binary_tree_depth(tree->parent) : 0;
}
