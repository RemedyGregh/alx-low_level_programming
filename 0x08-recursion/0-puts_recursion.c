#include "main.h"

/**
 * _puts_recursion - function to print a string, followed by a new line
 * @s: pointer to char argument
 *
 * Return: null if string contains no char
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
