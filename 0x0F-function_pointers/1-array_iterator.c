#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - prints an integer
 *@array: array
 *@size:size of arraty
 *@action: function
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t sizet;

	if (array && action)
		for (sizet = 0; sizet < size; sizet++)
		{
			action(array[sizet]);
		}
}
