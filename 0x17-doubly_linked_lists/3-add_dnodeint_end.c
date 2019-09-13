#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - check the code for Holberton School students.
 *@h: head
 * Return: Always EXIT_SUCCESS.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *ojo;
	dlistint_t *puntero;

	ojo = malloc(sizeof(dlistint_t));
	if (ojo == NULL)
		return NULL;
	ojo->n = n;
	ojo->prev = NULL;
	ojo->next = NULL;
	puntero = *head;
	while(puntero != NULL)
	{
		puntero = puntero->next;
	}
	puntero->next = ojo;
	ojo->prev = puntero;

	return (*head);
}
