#include <stdlib.h>
#include "main.h"

/**
 * word_count - this function find the number of words in a string
 * @s: the string
 * Return: number of words
 */

int word_count(char *s)
{
	int flag, i, j;

	flag = j = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			j++;
		}
	}
	return (j);
}

/**
 * _strlen - this function compute the lenght of a string
 * @s: pointer to the string
 * Return: return the lenght of the string
 */

int _strlen(char *s)
{
	int x = 0;

	while (s[x])
		x++;
	return (x);
}

/**
 * **strtow - this function splits a string into words
 * @str: the string
 * Return: pointer to an array of words if success otherwise NULL if failure
 */

char **strtow(char *str)
{
	char **A, *tmp;
	int x, y = 0, len, words, i = 0, start, end;

	len = _strlen(str);
	words = word_count(str);
	if (words == 0)
		return (NULL);

	A = (char **) malloc(sizeof(char *) * (words + 1));
	if (A == NULL)
		return (NULL);

	for (x = 0; x <= len; x++)
	{
		if (str[x] == ' ' || str[x] == '\0')
		{
			if (i)
			{
				end = x;
				tmp = (char *) malloc(sizeof(char) * (i + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				A[y] = tmp - i;
				y++;
				i = 0;
			}
		}
		else if (i++ == 0)
			start = x;
	}

	A[y] = NULL;

	return (A);
}
