#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_list - check the code.
 *@head: data of a list
 * Return: nothing.
 */
void free_list(list_t *head)
{
	free(head);
}
