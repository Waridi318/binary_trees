#include "binary_trees.h"
/**
* calculate_height - calculates the height of the left and right subtrees
* @tree: root node
* Return: 1 if left height is equal to right, 0 otherwsise
*/
int calculate_height(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = calculate_height(tree->left);
	right_height = calculate_height(tree->right);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	else
		return ((left_height == right_height ? 1 : 0));
}
/**
* binary_tree_is_perfect - checks if a binary tree is perfect
* @tree: ptr->root node
* Return: 1 if is full, 0 otherwise
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_side, right_side, height;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	left_side = binary_tree_is_perfect(tree->left);
	right_side = binary_tree_is_perfect(tree->right);

	height = calculate_height(tree);
	if (left_side == 1 && right_side == 1 && height)
		return (1);
	else
		return (0);
}
