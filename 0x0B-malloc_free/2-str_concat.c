#include "main.h"
#include <stdlib.h>

/**
 * _strlen - a function that gets the length of a string
 * @s: the string
 * Return: returns the length of the string
 */

int _strlen(char *s)
{
	int x;

	x = 0;
	while (s[x] != '\0')
		x++;
	return (x);
}

/**
 * str_concat - this function concatenates two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: return NULL on failure and if the concat is success
 *	it returns a pointer to new string
 */

char *str_concat(char *s1, char *s2)
{
	int x, y = 0, sl1, sl2;
	char *A;

	if (s1 == NULL)
		sl1 = 0;
	else
		sl1 = _strlen(s1);
	if (s2 == NULL)
		sl2 = 0;
	else
		sl2 = _strlen(s2);

	A = malloc(sl1 + sl2 + 1);

	if (A == NULL)
		return (NULL);

	for (x = 0; x < sl1; x++, y++)
		A[y] = s1[x];

	for (x = 0; x < sl2; x++, y++)
		A[y] = s2[x];

	A[y] = '\0';
		return (A);
}
