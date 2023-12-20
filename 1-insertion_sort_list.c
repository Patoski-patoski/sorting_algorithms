#include "sort.h"

/**
 * insertion_sort_list - a function that sorts a doubly linked list of integers
 * in ascending order using the Insertion sort algorithm
 *
 * @list: pointer to head of doubly linked list
 *
 * Return: Nothing
 **/
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *temp, *swap;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	current = (*list)->next;

	while (current != NULL)
	{
		temp = current;
		swap = current->prev;
		current = current->next;

		while (swap != NULL && temp->n < swap->n)
		{
			swap->next = temp->next;
			if (temp->next != NULL)
				temp->next->prev = swap;
			if (swap->prev != NULL)
				swap->prev->next = temp;
			temp->prev = swap->prev;
			swap->prev = temp;
			temp->next = swap;
			if (temp->prev == NULL)
				*list = temp;
			swap = temp->prev;
			print_list((const listint_t *)*list);
		}
	}
}
