#include "holberton.h"
/**
 * *_memcpy - prints buffer in hexa
 * @dest:pointer
 * @src: constant to fill
 *@n:n bytes of memory area
 * Return: s.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{

	while(dest && n > 0)
	{
		*dest = *src;
		src++; 
		dest++;
		n--;
	}
	return (dest);
}
