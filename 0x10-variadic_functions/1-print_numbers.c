#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
* print_numbers - Prints numbers passed into a variadic function
* @separator: String to be printed between numbers
* @n: Int argument to detemine no of args passed to the var function
*
*Return: Nothing
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, nums;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		nums = va_arg(ap, int);
		printf("%d", nums);

		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}
