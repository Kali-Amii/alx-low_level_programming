#include "main.h"

/**
 * print_sign - prints sign of an integer
 *
 * @n: checks sign
 *
 * Return: + when n > 0
 * 0 when n == 0
 * - when n < 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
