#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - check the code for Holberton School students.
 *@h: head
 * Return: Always EXIT_SUCCESS.
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *ojo;
	size_t cont;

	ojo = h;
	while (ojo->next)
	{
		printf("%d\n", ojo->n);
		ojo = ojo->next;
		cont++;
	}
	printf("%d\n", ojo->n);
	cont++;
	return (cont);
}
