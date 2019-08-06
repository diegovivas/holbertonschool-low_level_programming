#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - check the code for Holberton School students.
 * @head:head
 * @idx:odx
 * @n:n
 * Return: Always 0.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *nodo;
	listint_t *pointer;
	unsigned int count = 0;

	nodo = malloc(sizeof(listint_t));
	if (!nodo)
	{
		free(nodo);
		return (NULL);
	}
	nodo->n = n;
	nodo->next = NULL;
	if (!*head && idx != 0)
	{
		free(*head);
		return (NULL);
	}
	else
	{
		if (idx == 0)
		{
			nodo->next = *head;
			*head = nodo;
		}
		else
		{
		pointer = *head;
		while (count < idx - 1 && pointer->next)
		{
			pointer = pointer->next;
			count++;
		}
		if (count == idx - 1)
		{
			nodo->next = pointer->next;
			pointer->next = nodo;
		}
		else
			return (NULL);
		}
		return (nodo);
	}
	return (NULL);
}
