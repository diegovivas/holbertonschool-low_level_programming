#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * sum_listint - check the code for Holberton School students.
 * @head: head
 * Return: Always 0.
 */
int sum_listint(listint_t *head)
{
	listint_t *pointer;
	int sum = 0;

	pointer = head;
	while (pointer)
	{
		sum += pointer->n;
		pointer = pointer->next;
	}
	return (sum);
}
