#include "holberton.h"
/**
 * reverse_array - check the code for Holberton School students.
 *@a:integer
 *@n:integer
 * Return: Always 0.
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int z;

	for (i = 0; i < (n / 2); i++)
	{
		z = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = z;
	}

}
