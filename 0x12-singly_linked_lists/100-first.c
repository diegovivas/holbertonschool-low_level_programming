#include <stdio.h>

/**
 * before - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int before(void) __attribute__((constructor));
int before(void)
{
	printf("You're beat! and yet,");
	printf(" you must allow,\nI bore my house upon my back!\n");
	return (0);
}
