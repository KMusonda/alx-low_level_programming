#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point of the program
 *
 * description: print whether the number stored in the variable n is positive or negative.
 * Return: return value set to 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* code goes there */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
