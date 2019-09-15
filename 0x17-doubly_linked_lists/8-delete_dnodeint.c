#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - check the code for Holberton School students.
 *@head: head
 *@index: index
 * Return: Always EXIT_SUCCESS.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *puntero, *puntero2;
	unsigned int ojo = 0;


	if (*head == NULL)
		return (-1);

	puntero = *head;
	while (puntero)
	{
		puntero = puntero->next;
		ojo++;
	}
	puntero = *head;
	if (index == 0)
	{
		*head = puntero->next;
		if (*head)
			(*head)->prev = NULL;
		free(puntero);
	}
	else if (ojo > index)
	{
		ojo = 0;
		while (ojo < (index - 1))
		{
			puntero = puntero->next;
			ojo++;
		}
		puntero2 = puntero->next->next;
		puntero->next = puntero2;
		if (puntero2)
			puntero2->prev = puntero;
		puntero = puntero->next;
		free(puntero);

	}
	else
		return (-1);
	return (1);
}
