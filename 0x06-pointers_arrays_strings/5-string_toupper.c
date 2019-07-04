#include "holberton.h"
/**
 * string_toupper - check the code for Holberton School students.
 *@s:integer
 * Return: Always 0.
 */
char *string_toupper(char *s)
{
	while (*s != '\0')
	{
		if (*s >= 'a' && *s <= 'z')
		{
			*s = *s - 32;
		}
		s++;
	}
	return (s);
}
