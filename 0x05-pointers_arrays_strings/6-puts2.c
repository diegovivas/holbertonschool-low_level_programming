#include "holberton.h"
/**
 * puts2 - check the code for Holberton School students.
 *@str:sad
 * Return: Always 0.
 */
void puts2(char *str)
{
	int count, i;

	while (str[count] != '\0')
	{
		count++;
	}

	i = 0;

	while (i < count)
	{
		if (i % 2 == 0)
		{
			_putchar(*(str + i));
		}
		i++;
	}
	_putchar('\n');
}
