#include <stdlib.h>
#include <stdio.h>
#include "sort.h"
/**
 * insertion_sort_list - Insertion sort function
 *@list: linked lisk to sort
 * Return: Nothing
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *ojo, *ojo2, *ojo3;
	int flag = 0;

	ojo = *list;
	while (ojo)
	{
		ojo2 = ojo;
		while (ojo->prev != NULL && ojo->n < ojo->prev->n)
		{
			ojo3 = ojo->prev;
			if (ojo->next != NULL)
			{
				ojo3->next = ojo->next;
				ojo->next->prev = ojo3;
			}
			else
				ojo3->next = NULL;
			if (ojo3->prev != NULL)
			{
				ojo->prev = ojo3->prev;
				ojo3->prev->next = ojo;
			}
			else
				ojo->prev = NULL;
			ojo3->prev = ojo;
			ojo->next = ojo3;
			if (flag == 0)
			{
				ojo2 = ojo3;
				flag = 1;
			}
			if ((*list)->prev != NULL)
				*list = (*list)->prev;
			print_list(*list);
		}
		ojo = ojo2;
		ojo = ojo->next;
		flag = 0;
	}

}
