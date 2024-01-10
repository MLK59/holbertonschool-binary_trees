#include "binary_trees.h"

/**
* binary_tree_height - measures the height of a binary tree
* @tree: pointer to the root node of the tree to measure the height
* Return: height of a binary tree. If tree is NULL, return 0
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	/*Initialize heights for left and right subtrees */
	size_t left_height = 0;
	size_t right_height = 0;

	if (tree == NULL)
		return (0);
	/* If left child exists, calculate its height recursively*/
	if (tree->left != NULL)
		left_height = 1 + binary_tree_height(tree->left);
	/* If right child exists, calculate its height recursively*/
	if (tree->right != NULL)
		right_height = 1 + binary_tree_height(tree->right);
	/* Return greater of two heights. Ternary operator (? :) if/else */
	return (left_height > right_height ? left_height : right_height);
}
