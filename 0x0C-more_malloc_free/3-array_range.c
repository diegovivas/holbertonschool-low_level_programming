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
	int a, b, counter, cont2, c;
	int *pointer;

	a = min;
	b = max;
	c = min;

	if (min > max)
	{
		return (NULL);
	}
	while (a <= b)
	{
		counter++;
		a++;
	}
	pointer = malloc(counter * sizeof(int));
	if (pointer == NULL)
	{
		return (NULL);
	}
	for (cont2 = 0; c <= b; cont2++)
	{
		pointer[cont2] = c;
		c++;
	}
	return (pointer);
}
