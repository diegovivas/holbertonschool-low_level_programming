#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_nodeint_end - check the code for Holberton School students.
 * @head: do something
 * @n: integer
 * Return: Always 0.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nodo;
	listint_t *pointer;
	int count;

	nodo = malloc(sizeof(listint_t));
	if (!nodo)
	{
		return (NULL);
	}
	nodo->n = n;
	nodo->next = NULL;
	if (*head == NULL)
	{
		*head = nodo;
	}
	else
	{
		pointer = *head;
		for (count = 0; pointer->next; count++)
		{
			pointer = pointer->next;
		}
		pointer->next = nodo;
	}
	return (*head);
}
