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
	int q;

	for (i = 0; i <= 7 ; i++)
	{
		for (e = 0; e <=  8 ; e++)
		{
			for (q = 0; q <= 9 ; q++)
			{
				if (i < e && e < q)
				{
				putchar(i + '0');
				putchar(e + '0');
				putchar(q + '0');

				if (!(i == 7 && e == 8 && q == 9))
				{
					putchar(',');
					putchar(' ');
				}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
