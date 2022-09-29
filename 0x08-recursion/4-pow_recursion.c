#include "main.h"

/**
 * _pow_recursion - function to print power of two intergers
 * @x: interger argument to be raised to a power
 * @y: power at which an interger is raised
 *
 * Return: Power of x^y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (x == 1 || y == 0)
	{
		return (1);
	}
	if (x == 0)
	{
		return (0);
	}
	return (x * _pow_recursion(x, y - 1));
}
