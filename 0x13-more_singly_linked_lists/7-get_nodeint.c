#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * get_nodeint_at_index - check the code for Holberton School students.
 * @head:head
 * @index: index
 * Return: Always 0.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *pointer;
	unsigned int count = 0;

	pointer = head;

	while (pointer)
	{
		if (count == index)
			return (pointer);
		pointer = pointer->next;
		count++;
	}
	return (NULL);
}
