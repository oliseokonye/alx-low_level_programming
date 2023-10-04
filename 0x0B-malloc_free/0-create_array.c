#include "main.h"
#include <stdlib.h>

/**
 * create_array - this function creates an array of chars
 * @size: the size of the array
 * @c: the initialized char
 *
 * Return: return pointer to the array, otherwise NULL if size is 0
 */

char *create_array(unsigned int size, char c)
{
	unsigned int y;
	char *A;

	A = malloc(sizeof(*A) * size);

	if (size == 0 || A == NULL)
		return (NULL);

	for (y = 0; y < size; y++)
		A[y] = c;

	return (A);
}
