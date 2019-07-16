#include "holberton.h"
/**
 * _strcpy - check the code for Holberton School students.
 *@destination: dosomething
 *@source: spurce
 * Return: Always 0.
 */
char *_strcpy(char *destination, char *source)
{
	char *start = destination;

	while (*source != '\0')
	{
		*destination = *source;
		destination++;
		source++;
	}

	*destination = '\0';
	return (start);
}
