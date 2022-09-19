#include "main.h"

/**
 * swap_int - swaps the value of two integers' values
 * @a: first integer
 * @b: second integer
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int vol = *a;

	*a = *b;
	*b = vol;
}
