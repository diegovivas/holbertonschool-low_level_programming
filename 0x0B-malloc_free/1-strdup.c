#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 *@str: string source
 * Return: Always 0.
 */
char *_strdup(char *str)
{
	char *str2;
	char *punterosave;
	int contador = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		while (str[contador])
		{
			contador++;
		}
		str2 = malloc(contador + 1);
		punterosave = str2;
		while (*str)
		{
			*punterosave++ = *str++;
		}
		return (str2);
	}
}
