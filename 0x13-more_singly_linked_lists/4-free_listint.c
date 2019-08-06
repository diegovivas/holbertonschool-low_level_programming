#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_listint - check the code for Holberton School students.
 * @head: head
 * Return: Always 0.
 */
void free_listint(listint_t *head)
{
	listint_t *cleaner;

	while (head)
	{
		cleaner = head;
		head = cleaner->next;
		free(cleaner);
	}
}
