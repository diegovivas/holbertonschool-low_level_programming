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
	dlistint_t *ojo;
	dlistint_t *puntero;
	dlistint_t *puntero2;
	unsigned int ojo2 = 0;
	unsigned int tam = 0;

	ojo = malloc(sizeof(dlistint_t));
	if (ojo == NULL)
		return (NULL);
	ojo->n = n;
	ojo->prev = NULL;
	ojo->next = NULL;
	puntero = *h;
	while (puntero)
	{
		puntero = puntero->next;
		tam++;
	}
	if (tam < idx)
		return (NULL);
	if (idx == 0 && *h == NULL && puntero->next == NULL)
	{
		ojo = *h;
		return (*h);
	}
	puntero = *h;
	puntero2 = puntero->next;
	while (ojo2 < (idx - 1))
	{

		puntero = puntero->next;
		puntero2 = puntero2->next;
		ojo2++;
	}
	puntero->next = ojo;
	ojo->prev = puntero;
	ojo->next = puntero2;
	puntero2->prev = ojo;
	return (*h);
}
