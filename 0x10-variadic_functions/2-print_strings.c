#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
* print_strings - Function to print strings
* @separator: String to print
* @n: number of strings passed to function
*
* Return: Nothing
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	char *res;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		res = va_arg(ap, char *);
		if (res == NULL)
			res = "(nil)";
		printf("%s", res);
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}
