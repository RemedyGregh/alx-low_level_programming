#include "main.h"

/**
 * _strchr - locates a character in string
 * @s: string to check
 * @c: character to check
 *
 * Return: pointer to spot in s with c or null
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	if (!c)
	{
		return (s);
	}
	return (NULL);

}
