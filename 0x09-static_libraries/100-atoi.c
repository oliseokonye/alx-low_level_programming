
/**
 * _atoi - converts a string to int
 * @s: string to convert
 *
 * Return: the signed int.
 */
int _atoi(char *s)
{
	unsigned int n;
	int a, sign;

	n = 0;
	a = 0;
	sign = 1;
	while (s[a] != '\0')
	{
		if (s[a] >= '0' && s[a] <= '9')
		{
			n = (n * 10) + (s[a] - '0');
		}
		else if (s[a] == '-')
		{
			sign *= -1;
		}
		else if (n > 0)
		{
			break;
		}

		a++;
	}
	return (sign * n);
}
