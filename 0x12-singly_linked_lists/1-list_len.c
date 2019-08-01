#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 *
 *
 *
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
