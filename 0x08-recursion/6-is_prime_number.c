#include "holberton.h"
/**
 * prime - check the code for Holberton School students.
 *@x:integer
 *@y:integer
 * Return: Always 0.
 */
int prime(int x, int y)
{
	if (x == y)
	{
		return (1);
	}
	else if (x % y == 0)
	{
		return (0);
	}
	else
	{
		return (prime(x, y + 1));
	}
}
/**
 * is_prime_number - check the code for Holberton School students.
 *@n:integer
 * Return: Always 0.
 */

int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}

	return (prime(n, 2));
}
