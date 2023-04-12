#include <stdlib.h>
#include "main.h"


/**
 * alloc_grid - allocates a grid with width and heghit.
 * @width: the grid width.
 * @height: the grid height.
 * Return: a pointer to the grid was created.
 */

int **alloc_grid(int width, int height)
{
	int **mygrid, i, j;
	int len;

	len = width * height;

	if (len <= 0)
	{
		return (NULL);
	}


	mygrid = (int **)malloc(sizeof(int *) * height);

	if (mygrid == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		mygrid[i] = (int *)malloc(sizeof(int) * width);

		if (mygrid[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(mygrid[i]);
			free(mygrid);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			mygrid[i][j] = 0;
		}
	}

	return (mygrid);
}
