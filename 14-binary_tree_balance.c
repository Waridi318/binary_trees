#include "binary_trees.h"
/**
* binary_tree_height - measures the height of a binary tree
* @tree: root node of the tree to measure the height
* Return: height
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
/*        if (tree->left == NULL && tree->right == NULL)*/
/*                return (0);*/
/*        else*/
	return ((left_height > right_height) ?
		(left_height + 1) :
		(right_height + 1));
}
/**
* binary_tree_balance - measures the balance factor of a binary tree
* @tree: root node of the tree to measure the height
* Return: balance factor
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
		return (0);
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return (left_height - right_height);
}