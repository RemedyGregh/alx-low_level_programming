#include "main.h"

/**
 * _strpbrk - searches a string for any set of bytes
 * @s: first occurrence of string to be located
 * @accept: string to be located
 *
 * Return: Returns matching character in s or null
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
