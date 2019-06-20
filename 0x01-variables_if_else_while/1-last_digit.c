#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, Ls;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
/* your code goes there */
	Ls = n % 10;
	if (n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, Ls);
	}
	else if (n == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, Ls);
	}
	else if (n < 6)
	{
		printf("Last digit of %d is and is %d less than 6 not 0\n", n, Ls);
	}
	return (0);
}
