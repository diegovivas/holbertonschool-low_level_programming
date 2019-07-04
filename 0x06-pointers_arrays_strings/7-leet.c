#include "holberton.h"
/**
 * leet - check the code for Holberton School students.
 *@s:integer
 * Return: Always 0.
 */
char *leet(char *s)
{
	char arr1[6] = {"Aeotl"};
	char arr2[6] = {"aEOTL"};
	char arr3[6] = {"43071"};
	int count = 0;
	int count2;

	while (s[count] != '\0')
	{
		for (count2 = 0; count2 < 6; count2++)
		{
			if (s[count] == arr1[count2] || s[count] == arr2[count2])
			{
				s[count] = arr3[count2];
			}
		}
		count++;
	}
	return (s);
}
