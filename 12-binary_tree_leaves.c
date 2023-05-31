#include "binary_trees.h"
/**
* binary_tree_leaves - counts the leaves in a binary tree
* @tree: root node of the tree
* Return: count of leaves
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left_side, right_side;

	if (tree == NULL)
		return (0);

	left_side = binary_tree_leaves(tree->left);
	right_side = binary_tree_leaves(tree->right);

	if (tree->left == NULL && tree->right == NULL)
		return (1);
	else
		return (right_side + left_side);
}

