#include "main.h"
#include <stdio.h>

/**
 * largest_number - returns the largest of 3 numbers
 *
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	a = 927;
	b = -98;
	c = 0;

	if (a > b && b > c)
	{
		printf("%d is the largest number.", a);
	}
	else if (b > a && a > c)
	{
		printf("%d is the largest number.", b);
	}
	else
	{
		printf("%d is the largest number.", c);
	}
	
	largest = largest_number(a, b, c);

	printf("%d is the largest number\n", largest);

	return (0);
}
