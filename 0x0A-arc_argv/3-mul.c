#include <stdio.h>
/**
 * _atoi - check the code for Holberton School students.
 *@s:do some
 * Return: Always 0.
 */
int _atoi(char *s)
{
	int res = 0;
	int sign = 1;
	int i = 0;
	int e = 1;
	int f;

	for (; s[i] != '\0'; ++i)
	{
		while (s[i] == '-' || s[i] == '=')
		{
			if (s[0] == '-')
			{
				f = -1;
			}
			sign = e * f;
			e = sign;
			i++;
		}
		res = res * 10 + (s[i] - '0');

	}
	return (sign * res);
}
/**
 * main - check the code for Holberton School students.
 *@argc:do some
 *@argv:dosome
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;
	int mul = 1;

	if (argc > 1)
	{
		for (i = 1 ; i < argc ; i++)
		{
			if (i > 2)
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				mul *= _atoi(argv[i]);
			}
		}
		printf("%d\n", mul);
	}
	return (0);
}
