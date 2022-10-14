#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
* sum_them_all - Variadic function to sum up all its parameteres
* @n: Unsigned int of first param
*
* Return: 0 if n == 0 || sum of params
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list ap;

	if (n == 0)
		return (0);

	va_start(ap, n);
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}
