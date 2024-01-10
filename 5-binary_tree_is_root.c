#include "binary_trees.h"

/**
* binary_tree_is_root - checks if a node is a root
* @node: pointer to the node to check
*
* This function checks if a node in a binary tree is a root node.
* A root node is a node that has no parent.
*
* Return: 1 if node is a root, otherwise 0. If node is NULL, return 0
*/
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->parent == NULL)
		return (1);
	return (0);
}
