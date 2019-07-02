#include <stdio.h>
/**
 * swap_int - check the code for Holberton School students.
 *@a:first pinter variable
 *@b:second pointer variable
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{

	int z;

	z = *a;
	*a = *b;
	*b = z;

}
