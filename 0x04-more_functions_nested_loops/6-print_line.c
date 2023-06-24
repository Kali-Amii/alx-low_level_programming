#include "main.h"

/**
 * print_line - a function that draws a straight line in the terminal.
 * @n: number of times character '_' is printed
 *
 * Return: no return
 */

void print_line(int n)
{

	int v;

	for (v = 0; v < n; v++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		_putchar(95);
	}
	_putchar('\n');
}
