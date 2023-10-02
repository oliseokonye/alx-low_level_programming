#include "main.h"


/**
 * _abs - Computes the absolute
 * @x: The number computed
 * Return: Absolute value
 */
int _abs(int x)
{
	if (x < 0)
	{
		int abs_val;


		abs_val = x * -1;
		return (abs_val);
	}
	return (x);
}
