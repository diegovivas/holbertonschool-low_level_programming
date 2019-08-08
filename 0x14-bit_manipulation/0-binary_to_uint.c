#include <stdio.h>
#include "holberton.h"

/**
 * binary_to_uint - convert number in binary to int
 * @b:string in binary
 * Return: Always 0.
 */
unsigned int binary_to_uint(const char *b)
{
	int cont, cont2, mul = 1;
	const char *pointer;
	unsigned int final = 0;

	pointer = b;
	if (b == NULL)
	{
		return (0);
	}
	for (cont = 0; pointer[cont] != '\0' ; cont++)
	{
	}
	for (cont2 = (cont - 1); cont2 >= 0 ; cont2--)
	{
		if (b[cont2] == '1')
		{
			final += mul;
		}
		mul *= 2;
	}


	return (final);

}
