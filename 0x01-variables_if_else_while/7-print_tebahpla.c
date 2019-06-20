#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	float al;

	for (al = 'z'; al >= 'a'; al--)

		putchar(al);
	putchar('\n');

	return (0);
}
