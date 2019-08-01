#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 *add_node - adds a new node at the beginning of a list_t list.
 *@str: string to add in new nodo
 *@head: data in list_t.
 *Return: return a pointer to new nodo.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *nodo;
	int cont;

	for (cont = 0; str[cont] != '\0'; cont++)
	{
	}

	nodo = malloc(sizeof(list_t));

	if (!nodo)
		return (NULL);

	nodo->str = strdup(str);
	nodo->len = cont;
	nodo->next = *head;
	*head = nodo;
	return (*head);
}
