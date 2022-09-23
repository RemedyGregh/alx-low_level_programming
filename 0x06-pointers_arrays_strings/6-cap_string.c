#include <stdio.h>
#include "main.h"

/**
 * _strlen - returns length of a string
 * @s: strlng
 *
 * Return: return length as integer
 */

int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;

	return (len);
}

/**
 * cap_string - function that capitalize first character of a word
 * @s: this is a pointer to the string
 *
 * Return: Always s
 */

char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != 0; i++)
	{
		if (i == 0 && s[i] >= 97 && s[i] <= 122)
			s[i] = s[i] - 32;
		if (s[i + 1] >= 97 && s[i + 1] <= 122)
		{
			if (s[i] == ' ' || s[i] == '\n' || s[i] == ','
					|| s[i] == ';' || s[i] == '.' || s[i] == '!'
					|| s[i] == '?' || s[i] == '"' || s[i] == '('
					|| s[i] == ')' || s[i] == '{' || s[i] == '}')
			{
				s[i + 1] = s[i + 1] - 32;
			}
			if (s[i] == '\t')
			{
				s[i + 1] = s[i + 1] - 32;
			}
		}
	}
	return (s);
}
