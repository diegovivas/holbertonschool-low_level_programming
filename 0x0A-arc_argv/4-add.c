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
	int i, j;
	int a = 0;
	int mul = 0;

	if (argc > 1)
	{
		for (i = 1 ; i < argc ; i++)
		{
			for (j = 0; argv[i][j] != '\0' ; j++)
			{
				if (!(argv[i][j] >= 48 && argv[i][j] <= 57))
				{
					a = 1;
				}
			}
			mul += _atoi(argv[i]);
		}
		if (a == 1)
		{
			printf("Error\n");
		}

		else
		{
			printf("%d\n", mul);
		}
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
