#include "binary_trees.h"
/**
* binary_tree_size -  measures the size of a binary tree
* @tree: pointer to the root node to measure the size
* Return: size of tree
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t right_size, left_size;

	if (tree == NULL)
		return (0);

	left_size = binary_tree_size(tree->left);
	right_size = binary_tree_size(tree->right);
	return (1 + right_size + left_size);
}
