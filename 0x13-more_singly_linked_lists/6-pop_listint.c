#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * pop_listint - check the code for Holberton School students.
 * @head: head
 * Return: Always 0.
 */
int pop_listint(listint_t **head)
{
	listint_t *puntero;
	int keep;

	puntero = *head;
	keep = puntero->n;
	*head = puntero->next;
	free(puntero);
	return (keep);
}
