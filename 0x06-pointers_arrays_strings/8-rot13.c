#include "holberton.h"
/**
 * rot13 - check the code for Holberton School students.
 *@s:integer
 * Return: Always 0.
 */
char *rot13(char *s)
{
	char arr1[53] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"};
	char arr3[53] = {"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm"};
	int count = 0;
	int count2;

	while (s[count] != '\0')
	{
		for (count2 = 0; count2 < 53; count2++)
		{
			if (s[count] == arr1[count2])
			{
				s[count] = arr3[count2];
				break;
			}
		}
		count++;
	}
	return (s);
}
