#include <stdio.h>
/**
 * main - prints its name, followed by a new line.
 * @argc: number of CL arguments.
 * @argv: array that contains the CL arguments.
 * Return: 0 - success.
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
