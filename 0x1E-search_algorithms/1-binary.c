#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * fprint - searches for a value using Linear search algorithm
 *@array: array for seach the value
 *@min: size of array
 *@max: value to search
 * Return: index of value or -1
 */
void fprint(int *array, size_t min, size_t max)
{
	printf("Searching in array: ");
	while (min < max)
	{
		printf("%d", array[min]);
		min++;
		if (min != max)
			printf(", ");
		else
			printf("\n");
	}
}
/**
 * binary_search - searches for a value using binary search algorithm
 *@array: array for seach the value
 *@size: size of array
 *@value: value to search
 * Return: index of value or -1
 */
int binary_search(int *array, size_t size, int value)
{

	size_t ojo = 0, cont = 0;
	size_t max = size - 1;

	if (array == NULL)
		return (-1);

	while (cont <= max)
	{
		fprint(array, cont, max + 1);
		ojo = ((cont + max) / 2);
		if (array[ojo] < value)
			cont = ojo + 1;
		else if (array[ojo] > value)
			max = ojo - 1;
		else
			return (ojo);
	}
	return (-1);
}
