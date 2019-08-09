#include <stdio.h>
#include "holberton.h"

/**
 * clear_bit - check the code for Holberton School students.
 * @n: number
 * @index: index to set 0.
 * Return: 1 or -1.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int *pointer;
	unsigned int ind = 1;

	if (index > 31)
	{
		return (-1);
	}
	pointer = n;
	ind <<= index;
	if (*pointer >= ind)
		*pointer -= ind;
	return (1);
}
