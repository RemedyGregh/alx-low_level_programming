#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
* create_array - Function that creates an array of chars
* @size: Integer argument
* @c: Specific char to initialize array with
*
*Return: A pointer to the array or NULL if it fails
*/

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(*array) * size);

	if (array == NULL)
		return (NULL);
			free(array);

	while (i < size)
	{
		array[i] = c;
		i++;
	}
	return (array);
}
