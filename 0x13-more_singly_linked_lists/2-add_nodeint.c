#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_nodeint - check the code for Holberton School students.
 * @head:structure doble pointer
 * @n:index;
 * Return: Always 0.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nodo;

	nodo = malloc(sizeof(listint_t));
	if (!nodo)
	{
		return (NULL);
	}
	nodo->n = n;
	nodo->next = *head;

	*head = nodo;
	return (*head);

}
