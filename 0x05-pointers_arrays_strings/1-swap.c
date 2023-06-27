#include "main.h"

/**
 * swap_int - swap value of two int
 * @a: first integer
 * @b: second integer
 * Return: none
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
