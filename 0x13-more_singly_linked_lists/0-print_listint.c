#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_listint - check the code for Holberton School students.
 * @h:variable
 * Return: size_txc.
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *pointer;
	int count;

	pointer = h;
	for (count = 0; pointer != '\0'; count++)
	{
		printf("%d\n", pointer->n);
		pointer = pointer->next;
	}

	return (count);
}
