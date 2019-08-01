#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 *print_list - print list from structure
 *@h: data in structure
 *Return: leng of list
 */
size_t print_list(const list_t *h)
{

	const  list_t *nodo;
	size_t cont;

	nodo = h;
	for (cont = 0; nodo != NULL; cont++)
	{
		if (!nodo->str)
		{
			printf("[0] (nil)\n");
		}
		else
			printf("[%d] %s\n", nodo->len, nodo->str);
		nodo = nodo->next;
	}
	return (cont);
}
