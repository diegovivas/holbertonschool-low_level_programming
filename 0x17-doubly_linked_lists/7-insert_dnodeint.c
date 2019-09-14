#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - check the code for Holberton School students.
 *@h: head
 *@n: int
 *@idx: index
 * Return: Always EXIT_SUCCESS.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *ojo, *puntero, *puntero2;
	unsigned int ojo2 = 0;

	ojo = malloc(sizeof(dlistint_t));
	if (ojo == NULL)
		return (NULL);
	ojo->n = n;
	ojo->prev = NULL;
	ojo->next = NULL;
	if (!*h && idx != 0)
	{		return (NULL);
	}
	else
	{
		if (idx == 0)
		{			ojo->next = *h;
			*h = ojo;
		}
		else
		{
			puntero = *h;
			while (ojo2 < idx && puntero->next)
			{
				puntero = puntero->next;
				ojo2++;
			}
			if (ojo2 == idx)
			{
				puntero2 = puntero->next;
				ojo->next = puntero->next;
				ojo->prev = puntero;
				puntero2->prev = ojo;
				puntero->next = ojo;
			}
			else
				return (NULL);
		}
		return (ojo);
	}
	return (NULL);
}
