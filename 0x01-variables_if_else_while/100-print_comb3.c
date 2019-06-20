#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int e;

	for (i = 0; i <= 8 ; i++)
	{
		for (e = 0; e <=  9 ; e++)
		{

			if (i < e)
			{
				putchar(i + '0');
				putchar(e + '0');

			if (!(i == 8 && e == 9))
			{
				putchar(',');
				putchar(' ');
			}
			}
		}
	}
	putchar('\n');
	return (0);
}
