#include "main.h"

/**
 * _isdigit - a function that checks for a digit
 * @c: checkc digit 0 through 9
 *
 * Return: Always 0
 */

int _isdigit(int c)
{

	int i;
	int num = c;
	int digit = 48;

	for (i = 0; i <= 8; i++)
	{
		if (num == digit)
		{
			return (1);
		}
		digit++;
	}


	return (0);
}
