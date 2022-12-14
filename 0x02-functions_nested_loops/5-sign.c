#include "main.h"

/**
 * print_sign - prints sign
 *
 * @n: sign to be printed
 * Return: 1 if sign is +, 0 if 0 and -1 if -
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}

	else
	{
		_putchar('0');
		return (0);
	}

}
