#include "holberton.h"
/**
 * print_line - check the code for Holberton School students.
 *@n:character
 * Return: Always 0.
 */
void print_line(int n)
{
	int e;

	for (e = 0; e <= n; e++)
	{
		if (e != 0)
		{
		_putchar('_');
		}
	}
_putchar('\n');


}
