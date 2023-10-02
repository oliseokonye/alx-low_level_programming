#include "main.h"
/**
 * _isalpha - Checks charcter
 * @x: The charceter
 * Return: 1 for all
 */

int _isalpha(int x)

{
	if ((x >= 65 && x <= 90) || (x >= 97 && x <= 122))
	{
		return (1);
	}
	return (0);
}
