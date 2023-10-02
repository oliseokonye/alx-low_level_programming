#include<string.h>

/**
 * _strcat - strcat manually
 * @dest: to append in
 * @src: to append with
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int enddst = strlen(dest);
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[enddst + i] = src[i];
	}
	dest[enddst + i] = '\0';
	return (dest);
}
