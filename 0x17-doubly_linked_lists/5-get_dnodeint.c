#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *get_dnodeint_at_index - check the code for Holberton School students.
 *@head: head
 *@index: index
 * Return: Always EXIT_SUCCESS.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int ojo = 0;
	dlistint_t *ojo2;

	if (!head)
		return (NULL);
	ojo2 = head;
	while (ojo < index)
	{
		if (ojo2->next)
			ojo2 = ojo2->next;
		else
			return (NULL);
		ojo++;
	}
	return (ojo2);

}
