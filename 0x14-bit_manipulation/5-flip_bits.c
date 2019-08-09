#include <stdio.h>
#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int number;
	unsigned long int eye = 1;
	int count = 0;

	eye <<= 63;
	number = (n ^ m);
	for (; eye > 0; eye >>= 1)
	{
		if (eye & number)
		{
			count++;
		}
	}
	return (count);


}
