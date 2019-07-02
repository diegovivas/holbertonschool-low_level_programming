 #include "holberton.h"
/**
 * rev_string - check the code for Holberton School students.
 *@s:something
 * Return: Always 0.
 */
void rev_string(char *s)
{
	char z;
	int i;
	int count = 0;

	while (s[count] != '\0')
	{
		count++;
	}

	for (i = 0; i < (count / 2); i++)
	{
		z = s[i];
		s[i] = s[count - i - 1];
		s[count - i - 1] = z;
	}

}
