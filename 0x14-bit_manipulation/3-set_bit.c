#include <stdio.h>
#include "holberton.h"

/**
 * set_bit - set value of a bit at given index.
 * @n: int
 * @index: index to set
 * Return: Always 0.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int *pointer;
	unsigned long int ind = 1;

	if (index > 64)
	{
		return (-1);
	}
	pointer = n;
	ind <<= index;
	if (!(*pointer & ind))
		*pointer += ind;
	return (1);

}
