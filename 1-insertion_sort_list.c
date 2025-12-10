#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

void swap_nodes(listint_t **list, listint_t *left, listint_t *right);

/**
 * insertion_sort_list - sorts a doubly linked list of integers
 * @list: pointer to the pointer to the head of the list
 *
 * Description: This function implements the insertion sort algorithm
 * on a doubly linked list. It iterates over each node starting from
 * the second node and moves it leftward while necessary. After each
 * swap, the list is printed for tracking.
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *current, *insertion;

	if (!list || !*list || !(*list)->next)
	{
		return;
	}
	current = (*list)->next;

	while (current)
	{
		insertion = current->prev;

		while (insertion && insertion->n > current->n)
		{
			swap_nodes(list, insertion, current);
			print_list(*list);
			insertion = current->prev;
		}

		current = current->next;
	}
}

/**
 * swap_nodes - swaps two adjacent nodes in a doubly linked list
 * @list: pointer to the pointer to the head of the list
 * @left: pointer to the left node
 * @right: pointer to the right node
 *
 * Description: This function rearranges the pointers in a doubly linked
 * list to swap two adjacent nodes. It updates both the previous and next
 * links. If the left node is the head, the head pointer is updated.
 */

void swap_nodes(listint_t **list, listint_t *left, listint_t *right)
{
	if (left->prev)
	{
		left->prev->next = right;
	}

	else
	{
		*list = right;
	}

	if (right->next)
	{
		right->next->prev = left;
	}

	left->next = right->next;
	right->prev = left->prev;

	right->next = left;
	left->prev = right;
}
