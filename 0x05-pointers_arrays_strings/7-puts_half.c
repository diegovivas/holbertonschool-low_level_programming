#include "holberton.h"
/**
 * puts_half - check the code for Holberton School students.
 *@str:something
 * Return: Always 0.
 */
void puts_half(char *str)
{

	int count = 0;
	int a;

	while (str[count] != '\0')
	{
		count++;
	}

	if ((count % 2) == 0)
	{
		for (a = (count / 2) ; a < count ; a++)
		{
			_putchar(str[a]);
		}
	}

	else
	{
		a = (count + 1);

		for (a = (a / 2) ; a < count ; a++)
		{
			_putchar(str[a]);
		}
	}
			_putchar('\n');
}
