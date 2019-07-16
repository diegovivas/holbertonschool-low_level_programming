#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array of chars,initializes it with a specific char
 * @size: the address of memory to print
 * @c: the size of the memory to print
 *
 * Return: Nothing.
 */
char *create_array(unsigned int size, char c)
{

	unsigned int contador;
	char *array;

	array = malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
	for (contador = 0; contador < size ; contador++)
	{
		array[contador] = c;
	}

	return (array);
	}
}
