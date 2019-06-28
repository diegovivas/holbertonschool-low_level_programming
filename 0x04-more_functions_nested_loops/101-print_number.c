#include "holberton.h"
/**
 * print_number - check the code for Holberton School students.
 *@n:character
 * Return: Always 0.
 */
void print_number(int n)
{
int a, b, c, d, f;
	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}
	b = n;
	c = 1;
	for (a = 1; b > 9; a++)
	{
		b = b / 10;
		c = c * 10;
	}
	for (f = 1; f <= a; f++)
	{
		d = n / c;
		n = n % c;
		c = c / 10;
		_putchar(d + '0');

	}
}
