#include <stdio.h>
#include "holberton.h"

/**
 * print_binary - prints the binary representation of a number
 *@n:unsigned long number
 * Return: Always 0.
 */
void print_binary(unsigned long int n)
{
	unsigned long int number = 1;
	int start = 0;

	number = number << 63;

	if (n == 0)
	{
		_putchar('0');
	}
	for (; number > 0; number = number >> 1)
	{
		if (n & number)
		{
			_putchar('1');
			start = 1;
		}
		else if (start == 1 && !(n & number))
		{
			_putchar('0');
		}
	}


}
