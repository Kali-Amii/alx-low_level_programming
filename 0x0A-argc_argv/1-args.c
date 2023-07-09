#include <stdio.h>
/**
 * main - prints the number of arguments passed
 * @argc: number of CL arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 - success.
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
