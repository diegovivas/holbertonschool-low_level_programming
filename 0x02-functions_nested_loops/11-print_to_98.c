#include <stdio.h>
#include  "holberton.h"
/**
 * print_to_98 - Entry point
 *@n:do something
 * Return: Always 0 (Success)
 */
void print_to_98(int n)
{

	if (n < 98)
	{
		for ( ; n < 98 ; n++)
		{
			printf("%d, ", n);

		}

	}
	if (n > 98)
	{
		for ( ; n > 98; n--)
		{
			printf("%d, ", n);
		}

	}
	if (n == 98)
	{
		printf("%d", n);

	}

	putchar('\n');
}
