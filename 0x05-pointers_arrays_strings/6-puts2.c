#include "holberton.h"
/**
 * puts2 - check the code for Holberton School students.
 *@str:sad
 * Return: Always 0.
 */
void puts2(char *str)
{

	while (*str != '\0')
	{
		int z;

		z = *str;
		if (z % 2 == 0)
		{
			_putchar(z);
		}
		str++;
	}
	_putchar('\n');

}
