#include "main.h"

/**
 * _strspn - gets the length of a prefix of substring
 * @s: string to check
 * @accept: string to check against
 *
 * Return: number of bytes s in the accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, counter;

	counter = 0;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != ' ')
		{
			j = 0;
			while (accept[j] != '\0')
			{
				if (s[i] == accept[j])
				{
					counter++;
				}
				j++;
			}
		}
		else
		{
			return (counter);
		}
		i++;
	}
	return (counter);
}
