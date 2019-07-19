#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - check the code for Holberton School students.
 *@min:number of elements in array
 *@max: size bytes
 * Return: pointer.
 */
int *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *pointer ;
	unsigned int old, new;
	pointer = ptr;

	if(new_size == old_size)
	{
		free(ptr);
		return (pointer);
	}
	if (prt == NULL)
	{
		malloc(new_size);
	}

	return (pointer);
}
