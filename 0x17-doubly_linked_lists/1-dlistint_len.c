#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - check the code for Holberton School students.
 *@h: head
 * Return: Always EXIT_SUCCESS.
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *ojo;
	size_t cont = 0;

	ojo = h;
	while (ojo)
	{
		ojo = ojo->next;
		cont++;
	}
	return (cont);
}
