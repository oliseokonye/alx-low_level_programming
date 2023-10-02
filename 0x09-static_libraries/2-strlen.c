

/**
 * _strlen - a simple one
 * @s: address of the first char of a string,
 * becausez s is used in a regular expression.
 *
 * Return: length of the string s.
 */

int _strlen(char *s)
{
	int len, i;

	i = 0;
	len = 0;
	while (s[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
}
