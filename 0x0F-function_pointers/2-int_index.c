#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - return the iindex of the fisrt element
 *@array: the integer to check
 *@size: size
 *@cmp: funtion pointer
 * Return: 0 if false, something else otherwise.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int sizet = 0;
	int eye;

	if (size <= 0 || !array || !cmp)
		return (-1);

	while (sizet < size)
	{
	eye = cmp(array[sizet]);
	if (eye == 1)
	{
		break;
	}
	sizet++;
	}
		return (sizet);
}
