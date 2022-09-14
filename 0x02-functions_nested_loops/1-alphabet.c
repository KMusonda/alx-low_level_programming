#include "main.h"

/**
 * main - print all lower case letter
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char letter = 'a';
	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}

	_putchar('\n');
	return (0);
}
