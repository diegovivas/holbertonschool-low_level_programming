#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - check the code for Holberton School students.
 * @head: head
 * @index: index
 * Return: Always 0.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *pointer;
	listint_t *pointer2;
	unsigned int count = 0;
	int a;

	if (*head)
	{
		pointer = *head;
		pointer2 = pointer->next;
		if (index > 0)
		{
			while (count < index - 1)
			{
				pointer = pointer->next;
				pointer2 = pointer2->next;
				a = 1;
				count++;
			}
			pointer->next = pointer2->next;
			free(pointer2);
		}
		else
		{
			*head = pointer->next;
			free(pointer);
			a = 1;
		}
	}
	else
	{
		a = -1;
	}
	return (a);
}
