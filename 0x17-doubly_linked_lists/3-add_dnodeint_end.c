#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint_end - check the code for Holberton School students.
 *@head: head
 *@n: int
 * Return: Always EXIT_SUCCESS.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *ojo;
	dlistint_t *puntero;

	ojo = malloc(sizeof(dlistint_t));
	if (ojo == NULL)
		return (NULL);
	ojo->n = n;
	ojo->prev = NULL;
	ojo->next = NULL;
	if (*head == NULL)
	{
		*head = ojo;
	}
	else
	{
		puntero = *head;
		while (puntero->next)
		{
			puntero = puntero->next;
		}
		puntero->next = ojo;
		ojo->prev = puntero;
	}
	return (*head);
}
