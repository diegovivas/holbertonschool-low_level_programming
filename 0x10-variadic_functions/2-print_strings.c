#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - return a sum of all its parameters.
 *@separator: separator string between numbers.
 *@n: number of arguments
 *Return: sum of all parameters
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list pointer;
	unsigned int counter;
	char *number;

	va_start(pointer, n);


	for (counter = 0; counter < n; counter++)
	{
		number = va_arg(pointer, char*);

		printf("%s", number);

		if (separator && (counter < n - 1))
			printf("%s", separator);
	}
	printf("\n");

	va_end(pointer);
}

