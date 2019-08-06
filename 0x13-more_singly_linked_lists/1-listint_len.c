#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * listint_len - check the code for Holberton School students.
 * @h: vaiable.
 * Return: Always 0.
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *pointer;
	int count = 0;

	pointer = h;
	for (count = 0; pointer != '\0'; count++)
	{
		pointer = pointer->next;
	}
	return (count);
}
