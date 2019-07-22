#include <stdio.h>
#include "dog.h"

/**
 * print_dog - check the code for Holberton School students.
 *@d: struct pointer
 * Return: Always 0.
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (!((*d).name))
		{
			printf("Name: (nil)\n");
		}
		if (!((*d).owner))
		{
			printf("Owner: (nil)\n");
		}
		else
		{
		printf("Name: %s\n", (*d).name);
		printf("Age: %f\n", (*d).age);
		printf("Owner: %s\n", (*d).owner);
		}
	}
	else
	{
		return;
	}
}