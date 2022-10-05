#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* free_grid - Deallocates memory of a 2D grid
* @grid: Integer argument
* @height: Integer argument
*
* Return: Nothing
*/
void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
