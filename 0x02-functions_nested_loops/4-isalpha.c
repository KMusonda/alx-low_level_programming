#include <main.h>

/**
 * int _isalpha - checks for alphabetic characters
 *
 * @c: writes the characters
 * Return: 1 if c is a letter, lowercase or uppercase 0 otherwise
 */
int _isalpha(int c)
{
	return (c >= 'A' && c <= 'Z');
}
