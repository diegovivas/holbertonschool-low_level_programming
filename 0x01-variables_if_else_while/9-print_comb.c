#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int al;

	for (al = 0; al <= 9; al++)
	{
		putchar (al + '0');
	if (al != 9)
	{
		putchar(',');
		putchar(' ');

	}
	}
	putchar('\n');

	return (0);
}
