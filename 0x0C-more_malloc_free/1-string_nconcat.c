#include <stdio.h>
#include<stdlib.h>
#include "main.h"

/**
* string_nconcat - Function to concatenate two string
* @s1: Pointer to char argument
* @s2: Pointer to char argument
* @n: Integer argument of no of bytes of s2 to add to s1
*
* Return: Pointer to newly allocated memory containg the concat string
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int len1 = 0, len2 = 0;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (*(s1 + len1) != '\0')
	{
		len1++;
	}
	while (*(s2 + len2) != '\0')
	{
		len2++;
	}

	concat = malloc((len1 + n + 1) * sizeof(char));

	if (concat == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
	{
		concat[i] = s1[i];
	}
	if (n >= len2)
		n = len2;

	for (j = 0; j < n; j++)
	{
		concat[i] = s2[j];
		i++;
	}
	concat[i] = '\0';
	return (concat);
}
