

/**
 * _strcmp - strcmp man
 * @s1: string 1
 * @s2: string 2
 *
 * Return: strcmp
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int cmp = 0;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		/*
		 * if (s1[i] == s2[i])
		 * {
		 *	continue;
		 * }
		 * else if (s1[i] < s2[i])
		 * {
		 *	return (-1);
		 * }
		 * else
		 * {
		 *	return (1);
		 *}
		 */
		if (s1[i] != s2[i])
		{
			cmp = ((int) s1[i] - 48) - ((int)s2[i] - 48);
			break;
		}
	}
	return (cmp);
}
