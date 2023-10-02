#include <stdio.h>

/**
 * main - entry point
 * Description: this is a  function print all arguments it receives
 * @argc: the size of the array argv
 * @argv: number of array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
		printf("%s\n", argv[x]);
	return (0);
}
