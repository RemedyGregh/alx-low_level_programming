#include "main.h"

/**
 * _strlen_recursion - prints the length of a string exluding the null byte
 * @s: pointer to argument
 *
 * Return: returns the length of string
 */

int _strlen_recursion(char *s)
{
	int len;

	len = 1;
	if (*s == '\0')
	{
		return (0);
	}
	return (len + _strlen_recursion(s + len));
}
