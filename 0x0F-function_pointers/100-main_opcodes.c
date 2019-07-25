#include <stdio.h>
#include <stdlib.h>
/**
 * print_elem - prints an integer
 * @elem: the integer to print
 *
 * Return: Nothing.
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if(*argv < 0)
	{
		printf("Error\n");
		exit(0);
	}
	return (0);
}
