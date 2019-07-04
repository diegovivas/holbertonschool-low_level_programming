#include "holberton.h"
/**
 * *_strncpy - check the code for Holberton School students.
 *@dest:destino
 *@src:source
 *@n:integer
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *start = dest;

	while (n-- && *dest)
	{
		*dest = *src;
		dest++;
		src++;
	}

	if (*src < n)
	{
		*dest = '\0';
	}

	return (start);
}
