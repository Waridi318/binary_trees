#include "binary_trees.h"
/**
* binary_tree_depth -  measures the depth of a node in a binary tree
* @tree: pointer to the node to measure the depth
* Return: depth of node from root
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t h_depth;

	if (tree == NULL)
		return (0);
	h_depth = binary_tree_depth(tree->parent);

	if (tree->parent == 0)
		return (0);
	else
		return (h_depth + 1);
}
