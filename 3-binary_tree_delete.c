#include "binary_trees.h"

/**
* binary_tree_delete -deletes an entire binary tree
* @tree: ptr->root node of tree to delete
* Return: Nothing
*/
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	binary_tree_delete(tree->left);
/*	free(tree->left);*/
	tree->left = NULL;
	binary_tree_delete(tree->right);
/*	free(tree->right);*/
	tree->right = NULL;
/*	free(tree->parent);*/
	tree->parent = NULL;
	free(tree);
}
