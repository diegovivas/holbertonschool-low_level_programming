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

	if (index > 63)
	{
		return (-1);
	}
	pointer = n;
	ind <<= index;
	if (index == 0)
	{
		if (*pointer % 2 != 0)
		{
			*pointer -= ind;
			return (1);
		}
		else
			return (1);
	}
	if (*pointer >= ind && (*pointer & ind))
		*pointer -= ind;
	return (1);
}
