#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - mini printf
 *@format: that have the nmber of arguments
 *
 * Return: Nothing.
 */
void print_all(const char * const format, ...)
{
	va_list(pointer);
	int count;
	char *string;

	va_start(pointer, format);
	for (count = 0; format && format[count] ; count++)
	{
		switch (format[count])
		{
		case 'c':
			printf("%c", va_arg(pointer, int));
			break;
		case 'i':
			printf("%i", va_arg(pointer, int));
			break;
		case 'f':
			printf("%f", va_arg(pointer, double));
			break;
		case 's':
			string = va_arg(pointer, char*);
			if (!string)
			{
				printf("(nill)");
				break;
			}
			printf("%s", string);
			break;
		}
		if (format[count + 1] != '\0' && count != 1)
		{
			printf(", ");
		}
	}
	va_end(pointer);
	printf("\n");
}
