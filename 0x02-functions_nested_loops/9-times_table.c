#include "holberton.h"
/**
 * times_table - Entry point
 *
 * Return: Always 0 (Success)
 */
void times_table(void)
{
	int a, b, c, d;

	for (a = 0; a < 10; a++)
	{
	  _putchar('0');
		for (b = 1; b < 10; b++)
		{

		_putchar(',');
		_putchar(' ');
		c = a * b, d = c / 10;

			if (c < 10)
			{
				_putchar(' ');
				_putchar(c + '0');

			}
			else
			{
				_putchar(d + '0');
				_putchar(c % 10 + '0');
			}

		}

		_putchar('\n');
	}

}
