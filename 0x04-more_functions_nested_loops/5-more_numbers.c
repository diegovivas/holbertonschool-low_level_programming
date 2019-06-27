#include "holberton.h"
/**
 * print_numbers - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
	int i, e;

	for (e = 1; e <= 10; e++)
	{
		for (i = 0 ; i <= 14 ; i++)
		{
			if (i > 9)
			{
				_putchar(i / 10 + '0');
			}
			_putchar(i % 10 + '0');
		}
		_putchar('\n');
	}

}
