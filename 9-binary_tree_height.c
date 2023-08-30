#include "binary_trees.h"

#define max(i, j) (((i) > (j)) ? (i) : (j))
/**
 * binary_tree_height - measures the height of a binary tree
 *
 * @tree: the tree to measure
 * Return: Height of tree on success, 0 otherwise
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t r_height;
	size_t l_height;


	if (tree == NULL)
		return (0);

	r_height = binary_tree_height(tree->right);
	l_height = binary_tree_height(tree->left);

	return (1 + max(r_height, l_height));
}

