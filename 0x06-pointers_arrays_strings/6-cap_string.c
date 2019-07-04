#include "holberton.h"
/**
 * cap_string - check the code for Holberton School students.
 *@s:integer
 * Return: Always 0.
 */
char *cap_string(char *s)
{

	int count = 0;

	while (s[count] != '\0')
	{
		if (s[count] >= 'a' && s[count] <= 'z')
		{
			if (s[count - 1] == ' ' || s[count - 1] == '(')
			{
				s[count] = s[count] - 32;
			}

			if (s[count - 1] == 9 || s[count - 1]  == '"' || s[count - 1] == ')')
			{
				s[count] = s[count] - 32;
			}

			if (s[count - 1] == '\n' || s[count - 1] == '?' || s[count - 1] == '{')
			{
				s[count] = s[count] - 32;
			}

			if (s[count - 1] == '.' || s[count - 1] == '!' || s[count - 1] == '}')
			{
				s[count] = s[count] - 32;
			}

			if (s[count - 1] == ',' || s[count - 1] == ';')
			{
				s[count] = s[count] - 32;
			}

			if (count == 0)
			{
				s[count] = s[count] - 32;
			}
		}
		count++;
	}
	return (s);
}
