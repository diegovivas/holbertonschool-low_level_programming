#include "holberton.h"
/**
 * print_number - check the code for Holberton School students.
 *@n:character
 * Return: Always 0.
 */
void print_number(int n)
{
	int a, b, c, d, f, g;

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
	while (b > 9)
	{
		b = b / 10;
		a++;
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
