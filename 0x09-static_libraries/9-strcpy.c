
/**
 * _strcpy - strcpy from c lib
 * @dest: destination string to copy to
 * @src: source string to copy from
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int a;

	a = 0;
	while (src[a] != 0)
	{
		dest[a] = src[a];
		a++;
	}
	dest[a] = '\0';

	return (dest);
}
