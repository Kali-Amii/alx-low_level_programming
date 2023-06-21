#include "main.h"

/**
 * main - a program that prints _putchar, followed by a new line
 *
 * Return: always 0
 *
 */

int main(void)
{

	int str[] = {95, 112, 117, 116, 99, 104, 97, 114};
	int i;

	for (i = 0; i <= 7; i++)
		_putchar(str[i]);
	_putchar('\n');

	return (0);

}
