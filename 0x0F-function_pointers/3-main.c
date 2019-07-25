#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 *main - check the code
 * @argc: the integer to check
 *@argv: the argument
 * Return: 0 if false, something else otherwise.
 */
int main(int argc, char **argv)
{
	int a, b;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if (!get_op_func(argv[2]) || argv[2][1])
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[2][0] == '/' || argv[2][0] == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%i\n", get_op_func(argv[2])(a, b));

	return (0);
}
