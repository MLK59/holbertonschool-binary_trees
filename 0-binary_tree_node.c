#include "binary_trees.h"
#include <stdio.h>

/**
* binary_tree_node - creates a new binary tree node
* @parent: pointer to the parent node of the new node to create
* @value: value to put in the new node
* Return: a pointer to the newly created binary tree node, or NULL on failure
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	/*Allocate memory for new node */
	new_node = malloc(sizeof(binary_tree_t));

	/* If malloc fails, print error message and return NULL */
	if (new_node == NULL)
	{
		fprintf(stderr, "Error: Could not allocate memory for new node\n");
		return (NULL);
	}
	/* New node assigned given value*/
	new_node->n = value;

	/* Set the parent of the new node */
	new_node->parent = parent;

	/* Set the left and right children of the new node to NULL */
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}
