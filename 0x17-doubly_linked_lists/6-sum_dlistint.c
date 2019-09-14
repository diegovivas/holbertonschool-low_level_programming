#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *sum_dlistint - check the code for Holberton School students.
 *@head: head
 * Return: sum of data.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *ojo2;

	if (!head)
		return (0);
	ojo2 = head;
	while (ojo2)
	{
		sum += ojo2->n;
		ojo2 = ojo2->next;
	}
	return (sum);

}
