#include "main.h"

/**
 * _pow_recursion - raises the power of x to y
 * @x: value to be raised
 * @y: power of the value raised
 *
 * Return: -1 if y is less than 0
 */

int _pow_recursion(int x, int y)
{
	if  (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y == 1)
		return (x * _pow_recursion(x, y - 1));
	return (x * _pow_recursion(x, y - 1));
}
