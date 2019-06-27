#include "holberton.h"
/**
 * print_diagonal - check the code for Holberton School students.
 *@n:character
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int e, h;

	for (e = 0; e <= n; e++)
	{
		for (h = 1; h < e; h++)
		{
			_putchar(' ');
		}
		if (e >= 1)
		{
			_putchar('\\');
			_putchar('\n');
		}


	}

	if (n <= 0)
	{
		_putchar('\n');
	}

}
