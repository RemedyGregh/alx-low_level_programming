#include <stdio.h>
#include "main.h"
#include "stdlib.h"

/**
* str_concat - Function that concatenates two strings
* @s1: Pointer to first string passed to function
* @s2: Pointer to second string passed to function
*
* Return: Pointer to newly allocated memory, that contains s1 and s2 and '/0'
*/
char *str_concat(char *s1, char *s2)
{
	char *concat;
	unsigned int size1, size2, i, j;

	size1 = 0;
	size2 = 0;
	i = 0;
	j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[size1] != '\0')
		size1++;

	while (s2[size2] != '\0')
		size2++;

	concat = malloc(sizeof(char) * size1 + size2 + 1);

	if (concat == NULL)
		return (NULL);

	while (i < size1)
	{
		concat[i] = s1[i];
		i++;
	}

	while (j < size2)
	{
		concat[i] = s2[j];
		i++;
		j++;
	}
	concat[i] = '\0';
	return (concat);
}
