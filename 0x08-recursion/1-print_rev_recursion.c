#include "main.h"
/**
 * _print_rev_recursion - a function that prints a string
 * @s: the string
 * Return: no return
 */

void _print_rev_recursion(char *s)
{
	if (*s + 1 <= '\0')
		_putchar (*s);
	_putchar ('\n');
}
