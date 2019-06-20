#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char al;

	for (al = 'a'; al <= 'z'; al++)

		if (al == 'q' || al == 'e')
		{

		}
		else
		{
			putchar(al);
		}
	putchar('\n');
	return (0);
}
