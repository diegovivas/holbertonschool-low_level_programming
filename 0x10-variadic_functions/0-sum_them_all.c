#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - return a sum of all its parameters.
 *@n: data type of variable parameters.
 *
 *Return: sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int counter;
	va_list pointer;

	if (n == 0)
		return (0);

	va_start(pointer, n);

	for (counter = 0; counter < n; counter++)
		sum += va_arg(pointer, int);

	va_end(pointer);
	return (sum);
}
