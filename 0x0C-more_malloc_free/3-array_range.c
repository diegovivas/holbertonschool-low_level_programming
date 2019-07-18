#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - check the code for Holberton School students.
 *@min:number of elements in array
 *@max: size bytes
 * Return: pointer.
 */
int *array_range(int min, int max)
{
	int counter, cont2;
	int *pointer;

	counter = max - min;

	if (min > max)
	{
		return (NULL);
	}

	pointer = malloc(counter * sizeof(int));
	if (pointer == NULL)
	{
		return (NULL);
	}
	for (cont2 = 0; min <= max; cont2++)
	{
		pointer[cont2] = min;
		min++;
	}
	return (pointer);
}
