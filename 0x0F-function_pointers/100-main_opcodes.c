#include <stdio.h>
#include <stdlib.h>
/**
 * main - chambonada
 * @argc: the integer to print
 *@argv: arguments
 * Return: Nothing.
 */
int main(int argc, char *argv[])
{
	char a;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	a = atoi(argv[1]);
	if (a < 0)
	{
		printf("Error\n");
		exit(2);
	}
	return (0);
}
