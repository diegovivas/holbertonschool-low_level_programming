#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concadenate two strings.
 *@s1: array of string
 * @s2: array@ of string
 *Return: concad variable
 */
char *str_concat(char *s1, char *s2)
{
	int cont1, cont2, i, e;
	char *concad;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	cont1 = 0;
	while (s1[cont1] != '\0')
	{
		cont1++;
	}

	cont2 = 0;
	while (s2[cont2] != '\0')
	{
		cont2++;
	}

	concad = malloc((cont1 + cont2 + 1) * sizeof(char));
	if (concad == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		concad[i] = s1[i];
	}
	for (e = 0; e <= (cont2 + 1) ; e++)
	{
		concad[i + e] = s2[e];
	}
	return (concad);
}
