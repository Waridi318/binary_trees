#include "binary_trees.h"

/**
* binary_tree_uncle - finds the sibling of a node
* @node: node to check its sibling
* Return: uncle, otherwise NULL
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	if (node->parent == node->parent->parent->left)
	{
		if (node->parent->parent->right == NULL)
			return (NULL);
		return (node->parent->parent->right);
	}

	if (node->parent == node->parent->parent->right)
		if (node->parent->parent->left == NULL)
			return (NULL);
	return (node->parent->parent->left);
}
