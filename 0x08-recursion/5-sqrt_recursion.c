#include "holberton.h"
/**
 * _pow_recursion - check the code for Holberton School students.
 *@x:integer
 *@y:integer
 * Return: Always 0.
 */
int _pow_recursion(int x, int y)
{
	if (y * y == x)
	{
		return (y);
	}
	if (y < x)
	{
		return (_pow_recursion(x, y + 1));
	}
	else
	{
		return (-1);
	}
}
/**
 * _sqrt_recursion - check the code for Holberton School students.
 *@x:integer
 * Return: Always 0.
 */
int _sqrt_recursion(int x)
{
	return (_pow_recursion(x, 0));
}
