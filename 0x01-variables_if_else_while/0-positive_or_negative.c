#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Determine if a numbezr is positive, negative or zero
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	strand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n");
	}
	else
	{
		printf("%d is neggative\n");
	}
	return (0);
}	
