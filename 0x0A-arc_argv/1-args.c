#include <stdio.h>
/**
 * main - check the code for Holberton School students.
 *@argc:do some
 *@argv:dosome
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;

	if (*argv)
		for (i = 0 ; i < argc ; i++)
		{
			if (i ==  argc - 1)
				printf("%d\n", i);
		}
	printf("%d", i);

	return (0);
}
