#include "main.h"

/**
 * _isalpha - checks for alphabetic characters
 *
 * @c: writes the characters
 * Return: 1 if c is a letter, lowercase or uppercase 0 otherwise
 */
int _isalpha(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}

	else if (c >= 'a' && c <= 'z')
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
