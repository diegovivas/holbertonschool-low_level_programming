#include "holberton.h"
/**
 * times_table - Entry point
 *
 * Return: Always 0 (Success)
 */
void times_table(void)
{
	int a, b, c, d, e;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{

			c = a * b;
			d = c / 10;
			e = c % 10;

			if (c <= 9 && b != 9)
			{
				_putchar(c + '0');
				_putchar(',');
				_putchar(' ');
				_putchar(' ');

			}
			if (c <= 9 && b == 9)
			{
				_putchar(c + '0');
			}
			if (c > 9 && b != 9)
			{
				_putchar(d + '0');
				_putchar(e + '0');
				_putchar(',');
				_putchar(' ');
			}
			if (c > 9 && b == 9)
			{
				_putchar(d + '0');
				_putchar(e + '0');
			}
		}

		_putchar('\n');
	}

}
