#include <stdio.h>

/**
 * _atoi - this function will convert a string to an integer
 * @s: the string
 * Return: the converted integer
 */

int _atoi(char *s)
{
	int x = 0, end = 0, sign = 1;
	unsigned int T = 0;

	while (s[x] != '\0')
	{
		if (s[x] == '-')
			sign *= -1;

		while (s[x] >= '0' && s[x] <= '9')
		{
			end = 1;
			T = T * 10 + s[x] - '0';
			x++;
		}
		if (end == 1)
			break;
	x++;
	}
	return (T * sign);
}

/**
 * main - entry point
 * Description: this function will multiply two numbers and prints the result
 * @argc: the size of argv array
 * @argv: array of aarguments
 * Return: 0 if the program receives two number, 1 if not
 */

int main(int argc, char *argv[])
{
	int num1, num2;

	if (argc > 2)
	{
		num1 = _atoi(argv[1]);
		num2 = _atoi(argv[2]);
		printf("%d\n", num1 * num2);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
