#include "holberton.h"
/**
 * _islower - Entry point
 * @c: variable is something
 * Return: Always 0 (Success)
 */
int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}

	else
	{
		return (0);
	}

	return (0);

}
