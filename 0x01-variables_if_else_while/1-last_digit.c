#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 ** main- entry Last digit block
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	int n, ni;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ni = n % 10;

	if (ni > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, ni);
	if (ni < 6 && ni != 0)
		printf("Last digit of %d is %d and is less than 6 not 0\n", n, ni);
	if (ni == 0)
		printf("Last digit of %d is %d and is 0\n", n, ni);
	return (0);
}
