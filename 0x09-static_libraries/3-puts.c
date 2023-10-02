#include "main.h"


/**
 * _puts - a simple one
 * @str: a pointer that holds the address of the first element of a string.
 *
 */
void _puts(char *str)
{
	int a;

	a = 0;
	while (str[a] != '\0')
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
