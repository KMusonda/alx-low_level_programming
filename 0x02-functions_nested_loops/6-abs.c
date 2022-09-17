#include "main.h"

/**
 * _abs - prints absolute value of an int
 *
 * @n: value to be tested
 * Return: Always 0.
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}

	else if (n < 0)
	{
		return (-n);
	}

	else
	{
		return (n);
	}
}
