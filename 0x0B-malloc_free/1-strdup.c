#include "main.h"
#include <stdlib.h>

/**
 * _strlen - a function that gets the length of a string
 * @s: the string
 * Return: returns the length of the string
 */

int _strlen(char *s)
{
	int y;

	y = 0;
	while (s[y] != '\0')
		y++;
	return (y);
}

/**
 * _strdup - this function duplicates a string
 * @str: the string
 *
 * Return: NULL if string is empty, otherwise return pointer to new string
 */

char *_strdup(char *str)
{
	char *A;
	int y, sl;

	if (str == NULL)
		return (NULL);

	sl = _strlen(str);
	A = malloc(sl + 1);

	if (A == NULL)
		return (NULL);
	for (y = 0; y < sl; y++)
		A[y] = str[y];
	A[y] = '\0';
	return (A);
}
