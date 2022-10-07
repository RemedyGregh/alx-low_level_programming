#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* _calloc - Allocates memory for an array
* @nmemb: Integer argument
* @size: Integer argument
* Return: Pointer to the allocated memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *memarray;
	unsigned int i = 0;

	if (nmemb == 0)
		return (NULL);
	if (size == 0)
		return (NULL);

	memarray = malloc(size * nmemb);

	if (memarray == NULL)
		return (NULL);

	while (i < (nmemb * size))
	{
		*((char *)(memarray) + i) = 0;
		i++;
	}

	return (memarray);
}
