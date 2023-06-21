#include "main.h"

/**
 * _isalpha - a function that checks for alphabetic character
 *
 * @c: checks alphabet
 *
 * Return: always 0
 */

int _isalpha(int c)
{

	int i;
	char turn = c;
	char lower = 97;
	char upper = 65;

	for (i = 0; i < 52; i++)
	{
		if (turn == lower || turn == upper)
		{
			return (1);
		}
		lower++;
		upper++;
	}


	return (0);

}
