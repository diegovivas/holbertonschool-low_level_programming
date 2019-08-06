#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_listint2 - check the code for Holberton School students.
 * @head: head
 * Return: Always 0.
 */
void free_listint2(listint_t **head)
{
	listint_t *pointer;

	if (*head == NULL)
	{
		return;
	}
	while (*head)
	{
		pointer = *head;
		*head = pointer->next;
		free(pointer);
	}
	*head = NULL;
	free(*head);
}
