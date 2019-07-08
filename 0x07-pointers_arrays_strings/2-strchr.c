#include "holberton.h"
/**
 * *_strchr - check the code for Holberton School students.
 *@s:something
 *@c:something
 * Return: Always 0.
 */
char *_strchr(char *s, char c)
{

	while (*s != c)
	{
		++s;

		if (*s == c)
		{
			return (s);
		}

		if (!*s)
		{
			return (0);
		}
	}

	return (0);
}
