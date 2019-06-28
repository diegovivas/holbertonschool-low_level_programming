#include "holberton.h"
/**
 * print_number - check the code for Holberton School students.
 *@n:character
 * Return: Always 0.
 */
void print_number(int n)
{
	unsigned int a, b, c, d, f, g;

	if (n < 0)
	{
		_putchar('-');
		g = n * -1;
	}
	else
	{
		g = n;
	}
	b = g;
	c = 1;
	for (a = 1 ; b > 9 ;a++)
	{
		b = b / 10;
		c = c * 10;
	}
	for (f = 1; f <= a; f++)
	{
		d = g / c;
		g = g % c;
		c = c / 10;
		_putchar(d + '0');

	}
}
