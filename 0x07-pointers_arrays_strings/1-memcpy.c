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
	char *pointer = dest;
	char *pointer2 = src;
	while(dest && n > 0)
	{
		*pointer = *pointer2;
		pointer2++; 
		pointer++;
		n--;
	}
	return (dest);
}
