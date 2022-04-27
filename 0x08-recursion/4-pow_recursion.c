#include "main.h"
/**
 * _por_recursion - return x the power of  y
 * @x: base input number
 * @y: power input number
 * Return: x rise y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (x == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, (y-1)));
}
