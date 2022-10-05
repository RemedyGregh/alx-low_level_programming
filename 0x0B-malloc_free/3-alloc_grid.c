#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* alloc_grid - Function to return a memory for a 2D array
* @width: Integer argument
* @height: INteger argument
*
* Return: NULL on (failure) or a pointer to a 2D array on (Success)
*/
int **alloc_grid(int width, int height)
{
	int **space2D;
	int i;
	int a;
	int j;
	int b;

	if (width <= 0)
		return (NULL);

	if (height <= 0)
		return (NULL);

	space2D = (int **) malloc(sizeof(int *) * height);

	if (space2D == NULL)
		return (NULL);
			free(space2D);

	for (i = 0; i < height; i++)
	{
		space2D[i] = (int *) malloc(width * sizeof(int));
		if (space2D[i] == NULL)
		{
			for (j = 0; j <= i; j++)
			{
				free(space2D[j]);
			}
			free(space2D);
			return (NULL);
		}
	}
	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
			space2D[a][b] = 0;
	}
	return (space2D);
}
