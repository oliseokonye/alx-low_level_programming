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
 * _strcpy - this function will copy a string from 'src' to 'dest'
 * @dest: the destination
 * @src: The source
 * Return: return the string
 */

char *_strcpy(char *dest, char *src)
{
	int x;

	for (x = 0; src[x] != '\0'; x++)
		dest[x] = src[x];
	dest[x] = '\0';
	return (dest);
}

/**
 * argstostr - this function will concatenate all the arguments of my program
 * @ac: the number of arguments
 * @av: array of arguments
 * Return: pointer to new string if success otherwise NULL if fail
 */

char *argstostr(int ac, char **av)
{
	int x, Tl = 0;
	char *A, *A_out;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (x = 0; x < ac; x++)
		Tl += _strlen(av[x]) + 1;
	Tl++;

	A = malloc(Tl);
	if (A == NULL)
		return (NULL);

	A_out = A;
	for (x = 0; x < ac; x++, A++)
	{
		_strcpy(A, av[x]);
		A += _strlen(av[x]);
		*A = '\n';
	}
	*A = '\0';
	return (A_out);
}
