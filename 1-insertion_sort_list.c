#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of integers ascending order
 * @list: list
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *tmp;

	if (!list)
		return;

	tmp = *list;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;

		while (tmp->prev != NULL && tmp->n < tmp->prev->n)
		{
			tmp->prev->next = tmp->next;
			if (tmp->next != NULL)
				tmp->next->prev = tmp->prev;
			tmp->next = tmp->prev;
			tmp->prev = tmp->prev->prev;

			if (tmp->prev != NULL)
				tmp->prev->next = tmp;
			tmp->next->prev = tmp;

			if (tmp->prev == NULL)
				*list = tmp;

			print_list(*list);
		}
	}
}
