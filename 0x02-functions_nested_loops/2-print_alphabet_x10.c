#include "holberton.h"
/**
 * print_alphabet_x10 - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int a, d;

	for (a = '0'; a <= '9'; a++)
	{
		for (d = 'a'; d <= 'z'; d++)
		{
			_putchar(d);

		}
		_putchar('\n');
	}
}
