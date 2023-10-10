#include <stdio.h>

/**
 * main - starting point
 * Description - this is a programe that prints the name of the file that
 *	it was compiled from
 *
 * Return: 0
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
