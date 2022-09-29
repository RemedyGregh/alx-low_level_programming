#include "main.h"

/**
 * searcher - function to help find the square root
 * @num: number to be square rooted
 * @guess: guess the number
 *
 * Return: square root of number
 */

int searcher(int num, int guess)
{
	if (guess * guess == num)
	{
		return (guess);
	}
	if (guess * guess > num)
	{
		return (-1);
	}
	else
		return (searcher(num, guess + 1));
}

/**
 * _sqrt_recursion - function to find the natural square root of a number
 * @n: interger to be squared
 *
 * Return: the squared root of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
		return (searcher(n, 0));
}
