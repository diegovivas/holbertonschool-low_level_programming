#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 *list_len - return the number of elements in a linked list
 *@h; data in a linked list 
 *Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t elements;

	elements = 0;
	while (h)
	{
		elements++;
		h = h->next;
	}
	return (elements);
}
