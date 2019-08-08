#include <stdio.h>
#include "holberton.h"

/**
 * get_bit - get bit in index.
 * @n: number of evaluating.
 * @index: index to get the num.
 * Return: Always 0.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int number = 1;
	int bit = 0;

	if (index > 64)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (bit);
	}
	number <<= index;
	if (number & n)
	{
		bit = 1;
	}
	return (bit);
}
