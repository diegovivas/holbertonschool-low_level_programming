#include "holberton.h"
/**
 * *_memset - prints buffer in hexa
 * @s:pointer
 * @b: constant to fill
 *@n:n bytes of memory area
 * Return: s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *pointer = s;

	while (s && n > 0)
	{
		*pointer = b;
		pointer++;
		n--;
	}
	return (s);
}
