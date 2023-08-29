#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 *
 * @parent: parent of the new node to be inserted
 * @value: value to be inserted in the new node
 * Return: pointer to new node or NULL if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;
	binary_tree_t *holder;

	if (parent == NULL)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	if (parent->left == NULL)
	{
		parent->left = new_node;
		new_node->parent = parent;
		new_node->left = NULL;
		new_node->right = NULL;
		new_node->n = value;
		return (new_node);
	}

	holder = parent->left;
	parent->left = new_node;
	new_node->parent = parent;
	new_node->left = holder;
	new_node->right = NULL;
	new_node->n = value;
	holder->parent = new_node;
	return (new_node);


}
