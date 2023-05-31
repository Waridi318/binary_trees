#include "binary_trees.h"
/**
* binary_tree_is_full - checks if a binary tree is full
* @tree: ptr->root node
* Return: 1 if is full, 0 otherwise
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left_side, right_side;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	left_side = binary_tree_is_full(tree->left);
	right_side = binary_tree_is_full(tree->right);

	if (left_side == 1 && right_side == 1)
		return (1);
	else
		return (0);
}
