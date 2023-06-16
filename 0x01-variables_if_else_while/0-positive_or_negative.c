#include <stdlib.h>
#include <time.h>


/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */


int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	printf("n is : %d \n", n);
	
	if (n > 0){
		printf("is positive\n", n);
	}
	else if(n == 0)
	{
		printf("is zero\n", n);
	}
	else
		printf("is negative\n", n);

	return (0);
}