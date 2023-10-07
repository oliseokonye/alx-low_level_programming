#include "main.h"

int _strlen(char *s);

/**
 * string_nconcat - this function concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * @n: the number of bytes to be concatenated from s2
 * Return: pointer to new string if success
 *	NULL if fail
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int x, y = 0, sl1, sl2;
	char *A;

	if (s1 == NULL)
		sl1 = 0;
	else
		sl1 = _strlen(s1);
	if (s2 == NULL)
		sl2 = 0;
	else
		sl2 = _strlen(s2);
	if (n >= sl2)
		n = sl2;

	A = malloc(sl1 + n + 1);
	if (A == NULL)
		return (NULL);

	for (x = 0; x < sl1; x++, y++)
		A[y] = s1[x];
	for (x = 0; x < n; x++, y++)
		A[y] = s2[x];
	A[y] = '\0';
	return (A);
}

/**
 * _strlen - this function compute the lenght of a string
 * @s: pointer to the string
 * Return: return the length of the string
 */

int _strlen(char *s)
{
	int x = 0;

	while (s[x])
		x++;
	return (x);
}
