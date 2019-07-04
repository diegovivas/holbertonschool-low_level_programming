#include "holberton.h"
/**
 * string_toupper - check the code for Holberton School students.
 *@s:integer
 * Return: Always 0.
 */
char *string_toupper(char *s)
{

	int count = 0;
	while (s[count] != '\0')
	{
		if (s[count] >= 'a' && s[count] <= 'z')
		{
			s[count] = s[count] - 32;
		}
		s++;
	}
	return (s);
}
