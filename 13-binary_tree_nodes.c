#include "binary_trees.h"
/**
* binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
* @tree: ptr->root node
* Return: count
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left_side, right_side;

	if (tree == NULL)
		return (0);
	left_side = binary_tree_nodes(tree->left);
	right_side = binary_tree_nodes(tree->right);

	if (tree->left != NULL || tree->right != NULL)
		return (right_side + left_side + 1);
	else
		return (0);
}
