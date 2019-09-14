#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_dlistint - check the code for Holberton School students.
 *@head: head
 * Return: Nothing.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *puntero;

	if (!head)
		return;

	puntero = head;
	while (puntero)
	{
		puntero = puntero->next;
		free(head);
	head = puntero;
	}
	free(head);
}
