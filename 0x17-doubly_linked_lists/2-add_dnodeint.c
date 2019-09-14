#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - check the code for Holberton School students.
 *@head: head
 *@n:int
 * Return: Always EXIT_SUCCESS.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *ojo;


	ojo = malloc(sizeof(dlistint_t));
	if (ojo == NULL)
		return (NULL);
	ojo->n = n;
	ojo->next = NULL;
	ojo->prev = NULL;
	if (*head)
		ojo->next = *head;
	*head = ojo;
	return (*head);
}
