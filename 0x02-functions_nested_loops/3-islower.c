#include "main.h"

/**
 * _islower(int c); - print all lower case letter
 *
 *
 *return: 1 if c is lowercase, 0 otherwise.
 */
int _islower(int c);
{
	if (c >= 97 && c <= 122)
	return (1);
	else
	return (0);
}
