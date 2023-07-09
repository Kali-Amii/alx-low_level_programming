#include "main.h"

/**
 * _isupper - a function that checks for uppercase character.
 * @c: character check
 *
 * Return: always 0
 */

int _isupper(int c)
{

	int i;
	char upper = c;
	char alphabet = 65;


	for (i = 0; i < 26; i++)
	{
		if (upper == alphabet)
		{
			return (1);
		}
		alphabet++;
	}

	return (0);

}
