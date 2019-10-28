#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
listint_t *adelante(listint_t **list, listint_t **list2);
listint_t *atras(listint_t **list, listint_t **list2);

void cocktail_sort_list(listint_t **list)
{
	listint_t *ojo;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	if (ojo)
	{

	}
	ojo = *list;
	while (1)
	{
		ojo = adelante(list, &ojo);
		if (ojo->n == (*list)->n)
			break;
		ojo = atras(list, &ojo);
	}
}

listint_t *adelante(listint_t **list, listint_t **list2)
{
	listint_t *ret = NULL, *ojo, *ojo2, *ojo3 = *list2;

	while(ojo3)
	{
		ojo = ojo3;
		while (ojo->next != NULL && ojo->n > ojo->next->n)
		{
			ret = ojo;
			ojo2 = ojo->next;
			if (ojo2->next != NULL)
				ojo2->next->prev = ojo;
			ojo->next = ojo2->next;
			if (ojo->prev != NULL)
				ojo->prev->next = ojo2;
			ojo2->prev = ojo->prev;
			ojo2->next = ojo;
			ojo->prev = ojo2;
			if ((*list)->prev != NULL)
				*list = (*list)->prev;
			print_list(*list);
		}
		ojo3 = ojo3->next;
	}
	if (ret != NULL)
		return (ret);
	else
		return (*list);
}

listint_t *atras(listint_t **list, listint_t **list2)
{
        listint_t *ret = NULL, *ojo, *ojo2, *ojo3 = *list2;

        while(ojo3)
	{
		ojo = ojo3;
                while (ojo->prev != NULL && ojo->n < ojo->prev->n)
		{
			ret = ojo;
                        ojo2 = ojo->prev;
                        if (ojo2->prev != NULL)
				ojo2->prev->next = ojo;
                        ojo->prev = ojo2->prev;
			if (ojo->next != NULL)
				ojo->next->prev = ojo2;
			ojo2->next = ojo->next;
			ojo2->prev = ojo;
                        ojo->next = ojo2;
			if ((*list)->prev != NULL)
				*list = (*list)->prev;
			print_list(*list);
		        
		}
                ojo3 = ojo3->prev;
        }
	if (ret != NULL)
		return (ret);
	else
		return (*list);
}
