#include <stdio.h>
/**
 * main - prints all arguments it receives.
 * @argc: number of CL arguments.
 * @argv: array that contains the program CL arguments.
 * Return: 0 - success.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
