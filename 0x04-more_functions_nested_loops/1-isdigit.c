#include "main.h"
#include <stdio.h>

/**
 * _isdigit - checks for a digit
 *
 * @c: character to be checked
 * Return: 1 if c is digit other wise 0
 */

int _isdigit(int c)
{
	return ((c >= '0' && c <= '9') || (c != 'a' && c != 'z'));
}
