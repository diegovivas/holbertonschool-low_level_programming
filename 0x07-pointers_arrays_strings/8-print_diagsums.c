#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - check the code for Holberton School students.
 *@a:variable in x
 *@size: variable in y
 * Return: Always 0.
 */
void print_diagsums(int *a, int size)
{
	int c1;
	int sum = 0;
	int sum2 = 0;
	int i = 0;
	int e = 0;

	for (c1 = 0; c1 < size; c1++)
	{
		i = i + a[sum];
		sum = sum + (size + 1);

		sum2 = sum2 + (size - 1);
		e = e + a[sum2];
	}
	printf("%d, ", i);
	printf("%d\n", e);
}
