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
	unsigned int count2 = 0;

	if (*head)
	{
		pointer = *head;
		for (count2 = 0; pointer != NULL; count2++)
			pointer = pointer->next;
		pointer = *head;
		if (index == 0)
		{
			*head = (*head)->next;
			free(pointer);
		}
		else if (index < count2)
		{
			while (count < (index - 1))
			{
				pointer = pointer->next;
				count++;
			}
			pointer2 = pointer->next;
			pointer->next = pointer2->next;
			free(pointer2);
		}
		else
			return (-1);
		return (1);
	}
	else
		return (-1);
}
