#include "holberton.h"
/**
 * print_square - check the code for Holberton School students.
 *@size:character
 * Return: Always 0.
 */
void print_square(int size)
{
	int e, h;

	for (e = 1; e <= size; e++)
	{
		for (h = 1; h <= size; h++)
		{
			_putchar('#');
		}

		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}

}
