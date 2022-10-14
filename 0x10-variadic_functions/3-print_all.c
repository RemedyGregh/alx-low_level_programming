#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
* print_all - Function to print anything
* @format: List of all type of args
*
* Return: Nothing
*/
void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0;
	char *s;

	va_start(ap, format);

	while (format && format[i])
	{
		switch (format[i++])
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				break;
			case 'f':
				printf("%f", (float)va_arg(ap, double));
				break;
			case 's':
				s = va_arg(ap, char *);
				if (!s)
					s = "(nil)";
				printf("%s", s);
				break;
			default:
				continue;
		}
		if (format[i])
			printf(", ");
	}
	printf("\n");
	va_end(ap);
}
