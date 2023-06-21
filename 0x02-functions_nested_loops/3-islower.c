#include "main.h"

/**
 * _islower - a function that checks for lowercase character.
 *
 * @c: character check
 *
 * Return: always 0
 */

int _islower(int c)
{

	int i;
	char turn = c;
	char alpha = 97;

	for (i = 0; i < 26; i++)
	{
		if (turn == alpha)
		{
			return (1);
		}
		alpha++;
	}

	return (0);
}
