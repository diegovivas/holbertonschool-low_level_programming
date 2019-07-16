#include "holberton.h"
/**
 * _puts - check the code for Holberton School students.
 *@str:dosomething
 * Return: Always 0.
 */
void _puts(char *str)
{

	while (*str != '\0')
	{

		char *z = str;

		_putchar(*z);
		str++;
	}
	_putchar('\n');

}
