#include <stdio.h>
#include "holberton.h"

/**
 * flip_bits - check the number of bits .
 * @n: number 1
 * @m: number 2
 * Return: number of bit to flip.
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
