#include <stdio.h>
#include <stdlib.h>
/**
 * main - check the code for Holberton School students.
 *@argc:argument
 *@argv:array
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
			mul += atoi(argv[i]);
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
