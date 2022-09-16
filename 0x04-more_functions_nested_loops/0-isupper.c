#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks for upper case characters
 *
 *@c: character to be checked
 * Return: 1 if c is upper, 0 otherwise
 */

int _isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}
