#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - this function creats a 2D array of integers
 * @width: the width
 * @height: the height
 * Return: pointer to the 2D array otherwise NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int x, y, **A;

	if (width <= 0 || height <= 0)
		return (NULL);

	A = malloc(sizeof(*A) * height);

	if (A == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		A[x] = malloc(sizeof(int) * width);
		if (A[x] == NULL)
		{
			for (y = 0; y < x; y++)
				free(A[y]);
			free(A);
			return (NULL);
		}
		for (y = 0; y < width; y++)
			A[x][y] = 0;
	}
	return (A);
}
