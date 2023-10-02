#include<string.h>

/**
 * _strncat - strcat manually
 * @dest: to append in
 * @src: to append with
 * @n: length of src to append
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int enddst = strlen(dest);
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[enddst + i] = src[i];
	}
	dest[enddst + i] = '\0';
	return (dest);
}
