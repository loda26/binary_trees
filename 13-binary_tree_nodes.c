#include "binary_trees.h"
/**
 * binary_tree_nodes - function that counts the nodes
 * with at least 1 child in a binary tree
 * @tree: tree to check
 * Return: number of nodes with children
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t node = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		node += binary_tree_nodes(tree->left);
		node += binary_tree_nodes(tree->right);
		node += ((tree->left || tree->right) ? 1 : 0);
		return (node);
	}
}
