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
	int count = 0, id = 1;
	char *string;

	va_start(pointer, format);
	while (format && format[count])
	{
		switch (format[count])
		{
		case 'c':
			printf("%c", va_arg(pointer, int));
			id = 0;
			break;
		case 'i':
			printf("%i", va_arg(pointer, int));
			id = 0;
			break;
		case 'f':
			printf("%f", va_arg(pointer, double));
			id = 0;
			break;
		case 's':
			string = va_arg(pointer, char*);
			if (!string)
			{
				printf("(nill)");
				id = 0;
				break;
			}
			printf("%s", string);
			id = 0;
			break;
		}
		if (format[count + 1] != '\0' && id == 0)
		{
			printf(", ");
		}
		id = 1;
		count++;
	}
	va_end(pointer);
	printf("\n");
}
