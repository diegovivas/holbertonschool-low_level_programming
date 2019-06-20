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
	float ad;

	for (ad = '0'; ad <= '9'; ad++)

		putchar(ad);

	for (al = 'a'; al <= 'f'; al++)

		putchar(al);
	putchar('\n');
	return (0);
}
