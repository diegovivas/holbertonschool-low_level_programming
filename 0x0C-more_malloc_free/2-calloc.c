#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - check the code for Holberton School students.
 *@nmemb:number of elements in array
 *@size: size bytes
 * Return: pointer.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pointer;
	unsigned int cont;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	pointer = malloc(nmemb * size);

	if (pointer == NULL)
	{
		return (NULL);
	}

	for (cont = 0; cont < (nmemb * size); cont++)
	{
		pointer[cont] = 0;
	}
	return (pointer);
}
