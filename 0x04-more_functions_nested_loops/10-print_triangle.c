#include "holberton.h"
/**
 * print_triangle - check the code for Holberton School students.
 *@size:character
 * Return: Always 0.
 */
void print_triangle(int size)
{
	int e, h;

	for (e = 1; e <= size; e++)
	{
		for (h = size; h >= 1; h--)
		{
			if (h <= e)
			{
			_putchar('#');
			}
			else
			{
				_putchar('.');
}
		}

		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}

}
