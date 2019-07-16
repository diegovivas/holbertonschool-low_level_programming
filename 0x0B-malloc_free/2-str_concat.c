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
	int cont1, cont2;
	char *concad;

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}
	cont1 = 0;
	while (s1[cont1])
	{
		cont1++;
	}

	cont2 = 0;
	while (s2[cont2])
	{
		cont2++;
	}

	concad = malloc(cont1 + cont2 * sizeof(char));
	if (concad == NULL)
	{
		return (NULL);
	}

	concad = s1;

	while (*s1 != '\0')
	{
		s1++;
	}
	while (*s2 != '\0')
	{
		*s1 = *s2;
		s1++;
		s2++;
	}
	*s1 = '\0';
	return (concad);
}
