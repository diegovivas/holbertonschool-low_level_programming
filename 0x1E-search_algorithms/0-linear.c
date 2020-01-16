#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
/**
 * linear_search - searches for a value using Linear search algorithm
 *@array: array for seach the value
 *@size: size of array
 *@value: value to search
 * Return: index of value or -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t cont = 0;

	if (array == NULL)
		return (-1);

	while (cont < size)
	{
		printf("Value checked array[%ld] = [%d]\n", cont, array[cont]);
		if (array[cont] == value)
			return (cont);
		cont++;
	}

	return (-1);
}
