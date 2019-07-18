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
	int *pointer, counter, cont2;

	counter = max - min;

	if (min > max)
	{
		return (NULL);
	}

	pointer = malloc((counter + 1) * sizeof(int));
	if (pointer == NULL)
	{
		return (NULL);
	}
	for (cont2 = 0; min < max ; cont2++)
	{
		pointer[cont2] = min;
		min++;
	}
	pointer[cont2] = max;
	return (pointer);
}
