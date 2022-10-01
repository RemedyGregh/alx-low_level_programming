#include <stdio.h>
#include "main.h"

/**
 * _strstr - locates a substring
 * @needle: substring to be located
 * @haystack: string to be checked
 *
 * Return: pointer to the beginning of substring located
 * or NULL if substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == '\0')
		return (haystack);

	for (i = 0; *(haystack + i) != '\0'; i++)
	{
		if (*(haystack + i) == *needle)
		{
			char *ptr = _strstr(haystack + i + 1, needle + 1);

			return ((ptr) ? ptr - 1 : NULL);
		}
	}
	return (NULL);
}
